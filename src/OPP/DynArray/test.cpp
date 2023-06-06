#include <iostream>
#include "DynArray.hpp"

int main() {
    std::cout << "Testing DynArray class..." << std::endl;
    DynArray dynarr;

    std::cout << "size should be 0, size =  " << dynarr.size() << std::endl;

    for(std::size_t i = 0; i<9; i++) {
        dynarr.push(i);
        std::cout << "size should be " << i+1 << ", size = " << dynarr.size() << std::endl;
        std::cout << "value at pos " << i << " should be = " << i << ", actual value = " << dynarr.at(i) <<std::endl;
    }

    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "Testing that we can set elements in the array..." << std::endl;
    for(std::size_t i = 0; i< dynarr.size(); i++) {
        dynarr.at(i) = i*2;
        std::cout << "value at pos " << i << " should be = " << i*2 << ", actual value = " << dynarr.at(i) <<std::endl;
    }

    //DynArray copyDynarr{dynarr};
    DynArray copyDynarr = dynarr;

    std::cout << "Address of original array = " << &dynarr << ", address of copied array = " << &copyDynarr << std::endl;

    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "Verifying content of copy array..." << std::endl;
    for(std::size_t i = 0; i< dynarr.size(); i++) {
        std::cout << "value at pos " << i << " = " << dynarr.at(i) <<std::endl;
    }

     std::cout << "Address of original array's internal data = " << &dynarr.at(0) 
                << ", address of copied array's internal data = " << &copyDynarr.at(0) << std::endl;

    return 0;
}