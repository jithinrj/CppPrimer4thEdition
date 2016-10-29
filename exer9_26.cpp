#include "commonheader.h"

#include <algorithm>
#include <list>
using std::list;

int main()
{
    int ia[]={0,1,1,2,3,5,8,13,21,55,89};
    vector<int> ivec(ia, ia+11);
    list<int> ilist(ia, ia+11);
    vector<int>::iterator itv=ivec.begin();

    for(; itv != ivec.end(); ++itv)
    {
        while(itv!=ivec.end() && (*itv)%2==0) //keep on erasing till odd
            itv=ivec.erase(itv);

    }
    list<int>::iterator itl=ilist.begin();
    for(; itl != ilist.end(); ++itl)
    {
        while(itl!=ilist.end() && (*itl)%2==1) //keep on erasing till even
            itl=ilist.erase(itl);
    }

    //debug print
    cout << "Vec" << endl;
    for(vector<int>::iterator it=ivec.begin(); it != ivec.end(); ++it)
        cout << *it << endl;
    //debug print
    cout << "List" << endl;
    for(list<int>::iterator it=ilist.begin(); it != ilist.end(); ++it)
        cout << *it << endl;
    return 0;
}
