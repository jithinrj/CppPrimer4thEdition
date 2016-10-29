//exer 4.17
#include <iostream>

int main()
{
    int arr[5] = {0,1,2,3,4};
    int *p1=arr, *p2=arr+5;

    std::cout << p1 << std::endl;
    p1 += p2-p1;
    std::cout << p1 << std::endl;

    //expt
    int *ip, &r=ip;
    r=0;

    return 0;
}
