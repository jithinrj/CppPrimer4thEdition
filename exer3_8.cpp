#include <iostream>
#include <string>

//exercise 3.8
using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
    string strin, strout;
    while (cin >> strin)
        strout = strout + strin + " ";


    cout << "string read is: " << strout << endl;
    return 0;
}
