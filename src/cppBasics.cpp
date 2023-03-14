#include <iostream> // calling iostream library
#include <string>
#include <vector>

void pause();

int main() {
    // variable declaration
    int unitializedInt; // AVOID not initialized variables in production code
    int initInt = 4;
    /* a prefered way to init is bracket initialization */
    int bracketInit{314};

    std::cout << "unitializedInt = " << unitializedInt << " is a random value" << std::endl;
    std::cout << "initInt = " << initInt << " is the initial value" << std::endl;
    std::cout << "bracketInit = " << bracketInit << " initialized by bracket '{initVal}' notation" << std::endl;

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

    pause();
    // ******************************************
    // for loop

    // C-style for
    for(std::size_t i=0; i<10; i++){
        std::cout << "iteration " << i << "th" << std::endl;
    }

    pause();
    /* for each loop 
     * first we need an iterable for example:
     * std::vector<T> or std::array<T>
    */
    std::vector<int> v{1,2,3,4}; // same than v = {1,2,3,4};

    for(int i: v){
        std::cout << "value = " << i << std::endl;
    }

    return 0;
}

void pause(){
    char in;
    std::cout << "Press any key followed to enter to continue..." << std::endl;
    std::cin >> in;
}