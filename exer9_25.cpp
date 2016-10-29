#include "commonheader.h"

#include <algorithm>

int main()
{
    vector<int> ilist;
    ilist.push_back(1);
    ilist.push_back(2);
    ilist.push_back(3);
    ilist.push_back(4);
    ilist.push_back(5);
    vector<int>::iterator elem1, elem2;

    elem1 = find(ilist.begin(), ilist.end(),8);
    elem2 = find(elem1, ilist.end(), 6);

    ilist.erase(elem1,elem2);

    //debug print
    for(vector<int>::iterator it=ilist.begin(); it != ilist.end(); ++it)
        cout << *it << endl;


    return 0;
}
