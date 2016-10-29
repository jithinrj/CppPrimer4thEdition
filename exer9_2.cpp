#include "commonheader.h"

#include <list>
using std::list;

int main()
{
    int ia[7]={0,1,1,2,3,5,8};
    //Table 9.2
    //Method 1 - empty vector
    vector<int> ivec1;
    //Method 2 - copy
    vector<int> ivec2(ivec1);
    //Method 3 - range from iterators
    vector<int> ivec3(ia,ia+7);
    //Method 4 - with n elements each with value 1
    vector<int> ivec4(10,1);
    //Method 5 - initialized with 0
    vector<int> ivec5(10);

    //debug print
    cout << ivec3[1] << "\n" << ivec4[0] << "\n" << ivec5[0] << endl;



    return 0;
}
