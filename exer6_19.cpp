#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
    vector<int> ivec(5);
    ivec[0]=0;ivec[1]=1;ivec[2]=2;ivec[3]=3;ivec[4]=4;
    vector<int>::iterator iter=ivec.begin();
    while(*iter++ != 3 && iter != ivec.end())
    {
        //cout << *iter << endl;//debug
    }

    return 0;
}
