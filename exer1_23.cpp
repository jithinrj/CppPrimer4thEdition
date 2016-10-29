#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    float sumval = 0.0;
    std::cin >> item1;
    while(std::cin >> item2)
    {
        item1 +=  item2;
    }
    std::cout << "total = " << item1 << std::endl;
    return 0;
}
