#include <iostream>
#include "precomp.hpp"
#include "opencv2/core/dualquaternion.hpp"

namespace cv {

template <> double DualQuat<double>::dqs() {
    std::cout << "come in the dqs" << std::endl;
    return 1.2;
}

Atest::Atest()
{
    a = 1;
}

void Atest::print() 
{
    std::cout << "This number is " << a << std::endl;

}

}
