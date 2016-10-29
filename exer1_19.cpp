#include <iostream>
//Exercise 1.19 page 20
int main()
{
    int n1, n2; //read two input numbers
    int upp, low; //store upper and lower from n1 and n2
    int linecount=0; //after printing 10 linecounts, we go to next line
    int max_nums_per_line=10;
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
        std::cout << i << " ";
        linecount++;
        if((linecount % max_nums_per_line) == 0)
            std::cout << std::endl;
    }
    return 0;
}
