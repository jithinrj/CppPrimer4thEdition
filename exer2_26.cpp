#include <iostream>

//exer 2.26
int main()
{
    int ival = 0;
    const int &ri = 0;

    ival = ri;
    //ri=ival; //illegal - assignment of read only reference ri

    return 0;
}
