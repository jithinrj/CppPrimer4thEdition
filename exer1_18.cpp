#include <iostream>
//Exercise 1.18 page 20
int main()
{
    int n1, n2; //read two input numbers
    int upp, low; //store upper and lower from n1 and n2
    std::cout << "Enter 2 numbers : " << std::endl;
    std::cin >> n1 >> n2 ;
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
    std::cout << "Numbers in range of " << low << " and " << upp << " are : " << std::endl;
    for(int i = low; i <= upp; i++)
    {
        std::cout << i << std::endl;
    }
    return 0;
}
