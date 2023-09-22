#include "vector.h"

int main()
{
    Vector<double> vd(10);
    Vector<int> vi(10);

    int i=0;
    for (auto &e : vi)
    {
        e = ++i;
    }
    

    printVector(vd);
    printVector(vi);

    std::cout << vi * vi << std::endl;

    return 0;
}