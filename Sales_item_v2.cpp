//exercise 7.31, 7.32, 7.33
#include "Sales_item_v2.h"

void Sales_item_v2::ReadItems()
{
    string book;
    unsigned units;
    double cost;
    cout << "Enter ISBN" << endl;
    cin >> book;
    if(book != isbn)
    {
        cout << "Wrong isbn..exiting" << endl;
        return;
    }
    cout << "Enter units sold: " << endl;
    cin >> units;
    cout << "Enter total cost: " << endl;
    cin >> cost;
    units_sold += units;
    revenue += cost;
}

void Sales_item_v2::ShowItems()
{
    cout << "ISBN : " << isbn << endl;
    cout << "Units : " << units_sold << endl;
    cout << "Revenue : " << revenue << endl;
}
