#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int inp;
    cin >> inp;
    while(inp !=42)
    {
        cout << inp << endl;
        cin >> inp;
    }
    return 0;
}
