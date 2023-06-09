#include <iostream>
#include "DynArray.hpp"

#define PLAY_CONSTRUCTORS 1

void printSeparatorLine() {
    std::cout << "--------------------------------------------" << std::endl;
}

DynArray testingTempConstructors() {
    DynArray da;
    da.push(1);
    da.push(2);
    return da;
}

int main() {
    std::cout << "Testing DynArray class..." << std::endl;

    #if 0
    DynArray dynarr;
    std::cout << "size should be 0, size =  " << dynarr.size() << std::endl;

    for(std::size_t i = 0; i<9; i++) {
        dynarr.push(i);
        std::cout << "size should be " << i+1 << ", size = " << dynarr.size() << std::endl;
        std::cout << "value at pos " << i << " should be = " << i << ", actual value = " << dynarr.at(i) <<std::endl;
    }

    printSeparatorLine();    
    std::cout << "Testing that we can set elements in the array..." << std::endl;
    for(std::size_t i = 0; i< dynarr.size(); i++) {
        dynarr.at(i) = i*2;
        std::cout << "value at pos " << i << " should be = " << i*2 << ", actual value = " << dynarr.at(i) <<std::endl;
    }

    //DynArray copyDynarr{dynarr};
    DynArray copyDynarr = dynarr;

    std::cout << "Address of original array = " << &dynarr << ", address of copied array = " << &copyDynarr << std::endl;

    printSeparatorLine();
    std::cout << "Verifying content of copy array..." << std::endl;
    for(std::size_t i = 0; i< dynarr.size(); i++) {
        std::cout << "value at pos " << i << " = " << dynarr.at(i) <<std::endl;
    }

     std::cout << "Address of original array's internal data = " << &dynarr.at(0) 
                << ", address of copied array's internal data = " << &copyDynarr.at(0) << std::endl;

    #endif

    #if PLAY_CONSTRUCTORS
    printSeparatorLine();
    std::cout << "Playing with C++ constructors ..." << std::endl;

    DynArray da;
    DynArray da2;
    da2 = da;
    DynArray da3 = da;
    DynArray da4(da2);
    DynArray da5(testingTempConstructors());
    da5.push(2);
    std::cout << da5.at(0);
    #endif
    return 0;
}