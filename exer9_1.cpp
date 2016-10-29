#include "commonheader.h"

#include <list>
using std::list;

int main()
{
    int ia[7]={0,1,1,2,3,5,8};
    string sa[6]={"Fort Sumter", "Manassas", "Peeryville","Vicksberg", "Meridian","Cnacellorsville"};

    //a
    vector<string> svec(sa,sa+6);
    //b
    list<int> ilist(ia+4,ia+6);
    //c
    vector<int> ivec(ia,ia+8);
    //d - run time error
    list<string> slist(sa+6,sa);

    return 0;
}
