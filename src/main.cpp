#include<iostream>
#include "complexx.h"

int main()
{
    std::cout << "Hello World!" << std::endl;
    C x(3, 4);
    C z;
    z = C(2, 7);
    cout << "x + z = " << x + z << endl; 

    return 0;
}