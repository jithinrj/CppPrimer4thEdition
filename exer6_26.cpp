#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <cassert>

int main()
{
    string s;
    while(cin >> s)
    {
        assert(cin);
        cout << s << endl;
    }

    return 0;
}
