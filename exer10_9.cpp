#include "commonheader2.h"

int main()
{
    map<string, int> wcount;
    string inp;
    while(cin >> inp)
        ++wcount[inp];

    for(map<string,int>::iterator it=wcount.begin(); it!=wcount.end(); ++it)
        cout << it->first << "\t" << it->second << endl;

    return 0;
}
