#include <iostream>

int main()
{
    std::cout << "Who goes with F\145rgus?\012" << std::endl;
    std::cout << 3.14e1L << std::endl;
    std::cout << "two" L"some" << std::endl;
    std::cout << 1024f << std::endl; //illegal
    std::cout << "multiple line
                  comment" <<std::endl; //illegal

    return 0;
}
