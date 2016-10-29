//exercise 7.31, 7.32, 7.33
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

class Sales_item_v2
{
public:
    //C'tor
    Sales_item_v2(const string &book):
              isbn(book), units_sold(0), revenue(0.0) { }
    void ReadItems();
    void ShowItems();
    double AvgCostPerUnit() const;
private:
    string isbn;
    unsigned units_sold;
    double revenue;
};


//Defining functions in this file itself ..for now
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

double Sales_item_v2::AvgCostPerUnit() const
{
    if(units_sold)
        return revenue/units_sold;
    else
        return 0.0;
}
