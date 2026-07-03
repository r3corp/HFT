#include <string>
#include <map> 
#include <iostream>

int main (){
    //how is the return of multiple indexes of multimap
    std::multimap<int, std::string> mmTest;
    std::pair<int, std::string> p;
    p.first = 1;
    p.second = "One";
    mmTest.insert(p);
    p.first = 1;
    p.second = "first";
    mmTest.insert(p);
    p.first = 2;
    p.second = "two";
    mmTest.insert(p);
    p.first = 1;
    p.second = "um";
    mmTest.insert(p);
    p.first = 3;
    p.second = "tree";
    mmTest.insert(p);
    

    for(auto i : mmTest)
        std::cout << i.first << " " << i.second << std::endl;
    
    auto range = mmTest.equal_range(1);
    for(auto i = range.first; i != range.second; ++i)
        std::cout << i->first << " " << i->second << std::endl;

}