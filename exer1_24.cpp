#include <iostream>
#include "Sales_item.h"

//exercise 1.5.2
int main()
{
    Sales_item item_curr, item_next;
    //assuming old isbn do not repeat later
    if(std::cin >> item_curr)
    {
        //first item is valid
        while(std::cin >> item_next)
        {
            //subsequent item is valid
            if(item_curr.same_isbn(item_next))
                //item is same as previous
                item_curr += item_next;
            else
            {
                //new item - print sum of current item
                std::cout << item_curr << std::endl;
                //fresh start for next item
                item_curr = item_next;
            }
        }
        std::cout << item_curr << std::endl;
    }
    return 0;
}
