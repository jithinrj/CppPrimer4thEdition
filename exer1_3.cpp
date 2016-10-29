#include <iostream>

int main()
{
    //1.8
    std::cout << "/*"; //legal
    std::cout << "*/" //legal
    std::cout << /* "*/" */; //illegal

    return 0;
}
