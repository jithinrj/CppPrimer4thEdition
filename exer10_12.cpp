#include "commonheader2.h"

int main()
{
    map<string, int> wcount;
    string inp;
    while(cin >> inp)
        //++wcount[inp];
        {
            pair<map<string,int>::iterator,bool> ret = wcount.insert(map<string,int>::value_type(inp,1));
            if(!ret.second)
                ++ret.first->second;
        }



    for(map<string,int>::iterator it=wcount.begin(); it!=wcount.end(); ++it)
        cout << it->first << "\t" << it->second << endl;

    return 0;
}
