cmake_minimum_required(VERSION 3.20)

project(HighFreqTransf)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(GTest CONFIG REQUIRED)

file(GLOB SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/src/*.hpp")

add_executable(${PROJECT_NAME} ${SRC_FILES})

target_link_libraries(${PROJECT_NAME}
    GTest::gtest
    pthread
)

#message(STATUS "Compiler = ${CMAKE_CXX_COMPILER}")
#message(STATUS "Implicit includes = ${CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES}")