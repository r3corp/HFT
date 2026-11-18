#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>

#include <gtest/gtest.h>

#include <stdexcept>
#include <string>

//this file will discuss the usage of mmap files

namespace hft {
    
  //RAII wrapper for memory-mapped files in C++20
  class MMapFile {
  public:
    MMapFile(const std::string& filename, size_t size, bool create = false) : size_(size) {
      // Open the file and create a memory-mapped region

      int flags = create ? (O_RDWR | O_CREAT ) : (O_RDWR | O_ASYNC | O_APPEND); 
      fd_ = open(filename.c_str(), flags, 0644);
      if (fd_ == -1)
        throw std::runtime_error("open failed");

      if (fd_ == -1) {
          throw std::runtime_error("Failed to open file");
      }

      data_ = ::mmap(
              nullptr,
              size_,
              PROT_READ | PROT_WRITE,
              MAP_SHARED,
              fd_,
              0);

      if (data_ == MAP_FAILED) {
          ::close(fd_);
          throw std::runtime_error("mmap failed");
      }
    }

    template<typename T>
    T* as()
    {
      return static_cast<T*>(data_);
    }

    size_t size() const { return size_; }

    void sync()
    {
        if (::msync(data_, size_, MS_SYNC) == -1)
            throw std::runtime_error("msync failed");
    }

    ~MMapFile()
    {
        if (data_ && data_ != MAP_FAILED)
            ::munmap(data_, size_);

        if (fd_ != -1)
            ::close(fd_);
    }

    MMapFile(const MMapFile&) = delete;
    MMapFile& operator=(const MMapFile&) = delete;

  private:
      int fd_;
      size_t size_;
      void* data_;
  };

}

TEST(HFT, MMapFile) {
    const std::string filename = "test_mmap_file.dat";
    const size_t size = 1024;

    // Create a new memory-mapped file
    hft::MMapFile mmapFile(filename, size, true);

    // Write some data to the memory-mapped region
    int* data = mmapFile.as<int>();
    for (size_t i = 0; i < size / sizeof(int); ++i) {
 +        data[i] = static_cast<int>(i);
    }

    // Sync changes to the file
    mmapFile.sync();

    // Read back the data and verify
    for (size_t i = 0; i < size / sizeof(int); ++i) {
        EXPECT_EQ(data[i], static_cast<int>(i));
    }

}
