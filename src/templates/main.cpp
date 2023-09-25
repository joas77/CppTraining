#include "vector.h"
#include "sum.h"

int main()
{
    Vector<double> vd(10);
    Vector<int> vi(10);

    int i = 0;
    for (auto &e : vi)
    {
        e = ++i;
    }

    printVector(vd);
    printVector(vi);

    /*
     *  u * v  ==> dot product between u, v
     * e.g
     * u = [ 1 2 3 ]
     * v = [ 4 5 6]
     * u * v = 1*4 + 2*5 + 3*6
     */
    std::cout << "vi . vi = " << vi * vi << std::endl;

    // implicit
    std::cout << " 3 + 5 = " << sum(3, 5) << std::endl;

    // explicit
    std::cout << "3.14 + 2.7 = " << sum<float>(3.14, 2.7) << std::endl;

    return 0;
}
