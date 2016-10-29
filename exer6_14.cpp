#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    const int size=42;
    int ia[size];
    for(int *ptr=ia, ix=0; ix != size && ptr != ia+size; ++ix, ++ptr)
    {
        cout << ix << endl; //debug
    }

    for(; ;) //infinite loop
        if(ia[0]==0) //dummy condition
        return 0;

    return 0;
}
