#include <iostream>

//1.17
int main()
{
    int n=10; //Enter 10 number
    int i=1; //loop count
    int inp, count = 0; //input & count of neg numbers
    std::cout << "Enter" << n << " numbers" << std::endl;
    //Using while loop
    while( i <= n)
    {
        std::cin >> inp;
        if(inp < 0)
            count++;
        i++;
        std::cout << "Enter next number" << std::endl;
    }
    std::cout << "There are " << count << " negative numbers" << std::endl;

    return 0;
}
