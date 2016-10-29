#include "commonheader2.h"

int main()
{
    vector<string> bvec;
    bvec.push_back("b1");
    bvec.push_back("b2");
    bvec.push_back("b3");
    bvec.push_back("br1");
    bvec.push_back("b5");

    set<string> sred;
    sred.insert("br1");
    sred.insert("br2");

    for(vector<string>::iterator it=bvec.begin(); it != bvec.end(); it++)
    {
        if(!sred.count(*it))
        {
            sred.insert(*it);

        }
    }
    //print books read
    for(set<string>::iterator it=sred.begin(); it != sred.end(); it++)
        cout << *it << endl;
    return 0;
}
