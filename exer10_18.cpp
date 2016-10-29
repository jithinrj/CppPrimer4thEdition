#include "commonheader2.h"

int main()
{
    map<string, vector<string> > famtree;
    // 1
    vector<string> childnames1(3,"a1");
    famtree.insert(make_pair("fam1",childnames1));
    // 2
    vector<string> childnames2(4,"b1");
    famtree.insert(make_pair("fam2",childnames2));
    // 3
    vector<string> childnames3(2,"c1");
    famtree.insert(make_pair("fam3",childnames3));
    // 4
    vector<string> childnames4(3,"d4");
    famtree.insert(make_pair("fam4",childnames4));

    string famname;
    while(cin >> famname)
    {
        map<string,vector<string> >::iterator mapit = famtree.find(famname);
        if(mapit != famtree.end())
        {
            //Print child names
            cout << "Child names" << endl;
            for(vector<string>::iterator it=(mapit->second).begin(); it != (mapit->second).end(); it++)
                cout << *it << endl;
        }
        else
            cout << "Parent name not found" << endl;
    }
    return 0;
}
