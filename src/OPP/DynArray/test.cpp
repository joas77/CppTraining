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

    return 0;
}