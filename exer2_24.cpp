#include <iostream>
//exer 2.24
int main()
{
    int ival = 1.01;
    int &rval1 = 1.01; //illegal
    int &rval2 = ival;
    const int &rval3 = 1;

    return 0;
}
