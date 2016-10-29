//exercise 3.22
#include <vector>
#include <iostream> //debug

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<int> ivec(10,1);
    //vector<int>::iterator mid1 = (ivec.begin() + ivec.end())/2;
    vector<int>::iterator mid2 = ivec.begin() + ivec.size()/2;


    return 0;
}
