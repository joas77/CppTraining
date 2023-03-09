#include <iostream> // calling iostream library
#include <string>

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

    // ******************************************
    // switch case

    std::string name = "julio";

    //error: expression must have integral or enum typeC/C++(847)
    // switch (name) /* name is string */
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }

    int n;
    std::cout << "Enter any number between 0 and 9: ";
    std::cin >> n;

    switch (n)
    {
    case 0:
        std::cout << "Your number is " << n << std::endl; 
        break;
    case 1:
        std::cout << "Your number is " << n << std::endl; 
        break;
    case 2:
        std::cout << "Your number is " << n << std::endl; 
        break;
    case 3:
        std::cout << "Your number is " << n << std::endl; 
        break;
    case 4:
    case 5:
    case 6: 
    case 7:
    case 8:
    case 9:
        std::cout << "Your number is " << n << std::endl; 
        break;
    
    default:
        std::cout << "Your number is out of range (0, 9)" << std::endl;
        break;
    }

    return 0;
}

void pause(){
    char in;
    std::cout << "Press any key followed to enter to continue..." << std::endl;
    std::cin >> in;
}