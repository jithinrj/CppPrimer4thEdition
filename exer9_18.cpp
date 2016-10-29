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

    deque<int> odd, even;
    for(list<int>::iterator itl=ilist.begin(); itl != ilist.end(); ++itl)
    {
        if(*itl % 2 == 0)
            even.insert(even.end(),*itl);
        else
            odd.insert(odd.end(),*itl);
    }

    //print deques
    for(deque<int>::iterator it=odd.begin(); it != odd.end(); ++it)
        cout << *it << endl;
    for(deque<int>::iterator it=even.begin(); it != even.end(); ++it)
        cout << *it << endl;

    return 0;
}
