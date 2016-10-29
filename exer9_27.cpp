#include "commonheader.h"

#include <deque>
using std::deque;

#include <list>
using std::list;


int main()
{
    list<string> slist;
    slist.push_back("abc");
    slist.push_back("efg");
    slist.push_back("pqr");

    string val="efg";

    list<string>::iterator its=slist.begin();
    for(; its != slist.end(); ++its)
    {
        while(its != slist.end() && *its==val)
            its=slist.erase(its);
    }

    for(list<string>::iterator its=slist.begin();its != slist.end(); ++its)
        cout << *its << endl;

    deque<string> sdeq;
    sdeq.push_back("abc");
    sdeq.push_back("efg");
    sdeq.push_back("pqr");

    deque<string>::iterator itsdq=sdeq.begin();
    for(; itsdq != sdeq.end(); ++itsdq)
    {
        while(itsdq != sdeq.end() && *itsdq==val)
            itsdq=sdeq.erase(itsdq);
    }

    for(deque<string>::iterator itsdq=sdeq.begin();itsdq != sdeq.end(); ++itsdq)
        cout << *itsdq << endl;


    return 0;
}
