#include "commonheader.h"

int main()
{
    vector<int> ilist;
    ilist.push_back(1);
    cout << ilist.size() << endl << ilist.capacity() << endl;
    for(vector<int>::size_type ix=0; ix < 24; ix++)
        ilist.push_back(ix);

    cout << ilist.size() << endl << ilist.capacity() << endl;

    ilist.resize(10);
    cout << ilist.size() << endl << ilist.capacity() << endl;
    return 0;
}
