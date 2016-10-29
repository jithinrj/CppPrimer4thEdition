#include "commonheader.h"

#include <list>
using std::list;

int main()
{
    string strin;
    list<string> svec;
    while(cin >> strin)
    {
        svec.push_back(strin);
    }
    for(list<string>::iterator it=svec.begin(); it != svec.end(); ++it)
        cout << *it << endl;

    return 0;
}
