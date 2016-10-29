#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

//exercise 4 28
int main()
{
    vector<int> intvec;
    int inp;
    size_t veclen;
    cout << "Enter a number:" << endl;
    while(cin >> inp)
    {
        intvec.push_back(inp);
    }
    veclen = intvec.size();
    int *arr=new int[veclen];
    for(size_t ix=0; ix < veclen; ix++)
    {
        arr[ix] = intvec[ix];
        //debug
        cout << arr[ix] << endl;
    }

    return 0;
}
