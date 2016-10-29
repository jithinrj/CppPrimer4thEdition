#include <iostream>
//exer 2.25
int main()
{
    int ival = 1.01;
    //int &rval1 = 1.01; //illegal - initialization of non const reference with rvalue
    int &rval2 = ival;
    const int &rval3 = 1;

    rval2 = 3.14159;
    rval2 = rval3;
    ival = rval3;
    //rval3 = ival; //illegal - assignment of read only reference ri

    return 0;
}
