//exercise 4.14
#include <iostream>

int main()
{
    int i1=10, i2=20, *pi1=&i1, *pi2=&i2;
    pi1=pi2;
    *pi1 = *pi1 + 1;

    return 0;
}
