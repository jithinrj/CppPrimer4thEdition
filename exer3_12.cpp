//exercise 3.12
#include <vector>
#include <string>
#include <iostream> //debug

using std::vector;
using std::string;

int main()
{
    vector<int> ivec1;
    vector<int> ivec2(10);
    vector<int> ivec3(10,42);
    vector<string> svec1;
    vector<string> svec2(10);
    vector<string> svec3(10,"hello");

    std::cout << ivec1.size() << std::endl;//debug
    return 0;
}
