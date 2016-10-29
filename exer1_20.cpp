#include <iostream>
//Exercise 1.20 page 20
int main()
{
    int n1, n2; //read two input numbers
    int sum=0; //Initialize running sum with 0
    std::cout << "Enter 2 numbers : " << std::endl;
    std::cin >> n1 >> n2 ;
#if 0
    if(n1 <= n2)
    {
        upp = n2;
        low = n1;
    }
    else
    {
        upp = n1;
        low = n2;
    }
#endif // 0
    for(int i = n1; i <= n2; i++)
    {
        sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
}
