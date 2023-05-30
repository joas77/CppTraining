#include <iostream>
class Super
{
    public:
    void go() { std::cout << "go() called on Super" << std::endl; }
};

class Sub : public Super
{
    public:
    void go() { std::cout << "go() called on Sub" << std::endl; }
};

int main() {

    Sub mysub;
    mysub.go();

    Super& ref = mysub;
    ref.go();
    
    return 0;
}