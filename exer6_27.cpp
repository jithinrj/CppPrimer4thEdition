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
    while(cin >> s && s!="sought")
    {}
    assert(cin);

    return 0;
}
