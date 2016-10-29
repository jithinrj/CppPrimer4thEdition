#include <string>
using std::string;


int main()
{
    int ival; double dval;
    const string *ps; char *pc; void *pv;
    //a
    pv=(void*)ps;
    //b
    ival=(int)*pc;
    //c
    pv=(void*)&dval;
    //d
    pc=(char*)pv;

    return 0;
}
