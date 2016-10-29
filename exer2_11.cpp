#include <iostream>

//exer 2.11
int main()
{
    int base;
    long result=1;
    unsigned int pow, count=1;
    std::cout << "Enter base and exponent\n" << std::endl;
    std::cin >> base >> pow;
    //count is obsolete - we can do with pow only
    while(count <= pow)
    {
        result *= base;
        count++;
    }
    std::cout << "Result is " << result << std::endl;

    return 0;
}
