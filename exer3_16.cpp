//exercise 3.16
#include <vector>
#include <string>
#include <iostream> //debug

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<int> ivec1(10,42);
    vector<int> ivec2(10);
    for(vector<int>::size_type index=0; index < 10; index++)
        ivec2[index] = 42;
    vector<int> ivec3;
    for(vector<int>::size_type index=0; index < 10; index++)
        ivec3.push_back(42);

    return 0;
}
