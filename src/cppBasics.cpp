#include <iostream> // calling iostream library

void pause();

int main() {
    // variable declaration
    int unitializedInt;
    int initInt = 4;

    std::cout << "unitializedInt = " << unitializedInt << " is a random value" << std::endl;
    std::cout << "initInt = " << initInt << " is the initial value" << std::endl;

    char c = '@';
    std::cout << "c = " << c << " is a character" << std::endl;

    const char *msg = "hola mundo";
    std::cout << msg << " is a pointer to a character" << std::endl;

    pause();

    // ******************************************
    // conditionals

    int x = 5;

    if (x > 5) {
        std::cout << "x > 4 " << std::endl;
    } else if (x < 2) {
        std::cout << "x < 2" << std::endl;
    } else {
        std::cout << "2 <= x <= 5" << std::endl;
    }

    return 0;
}

void pause(){
    char in;
    std::cout << "Press any key followed to enter to continue..." << std::endl;
    std::cin >> in;
}