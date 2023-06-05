#include <iostream>
// remove virtuals and override
// to see that without virtual keyword C++ could hide the desired call of the method
class Super
{
    public:
    virtual void go() { std::cout << "go() called on Super" << std::endl; }
};

class Sub : public Super
{
    public:
    virtual void go() override { std::cout << "go() called on Sub" << std::endl; }
};

int main() {

    Sub mysub;
    mysub.go();

    Super& ref = mysub;
    ref.go();
    
    return 0;
}