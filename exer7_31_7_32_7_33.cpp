//exercise 7.31, 7.32, 7.33
#include "Sales_item_v2.h"

int main()
{
    Sales_item_v2 item1("BOOK1234");
    item1.ReadItems();
    item1.ShowItems();
    item1.ReadItems();
    item1.ShowItems();

    cout << "Avg cost = " << item1.AvgCostPerUnit() << endl;

    return 0;

}
