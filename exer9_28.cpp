#include "commonheader.h"

#include <cstring>

#include <deque>
using std::deque;

#include <list>
using std::list;

int main()
{
    list<char *>  pchlist;
    char *pc1="abc", *pc2="efg";
    pchlist.push_back(pc1);
    pchlist.push_back(pc2);

    vector<string> pcvec;

    pcvec.assign(pchlist.begin(), pchlist.end());
    //debug print
    cout << *(pcvec.begin()) << endl;
    return 0;
}
