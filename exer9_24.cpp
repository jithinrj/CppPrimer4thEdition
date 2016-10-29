#include "commonheader.h"


int main()
{
    vector<int> ivec(25,1);
    cout << ivec.at(0) << endl;
    cout << ivec[0] << endl;
    cout << ivec.front() << endl;
    cout << *(ivec.begin()) << endl;

    vector<int> ivec1;
    cout << ivec1.at(0) << endl;
    cout << ivec1[0] << endl;
    cout << ivec1.front() << endl;
    cout << *(ivec1.begin()) << endl;
    return 0;
}
