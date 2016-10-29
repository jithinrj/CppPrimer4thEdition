#include "commonheader.h"

#include <list>
using std::list;
#include <deque>
using std::deque;

int main()
{
    list<int> ilist;
    ilist.push_front(3);
    ilist.push_front(2);
    ilist.push_front(1);
    vector<int> ivec;
    ivec.push_back(1);
    ivec.push_back(2);
    ivec.push_back(3);

    ivec < ilist;

    return 0;
}
