#include "commonheader2.h"

int main()
{
    map<string, pair<string,string> > famtree;
    // 1
    pair<string,string> childnames1("c1","10101986");
    famtree.insert(make_pair("fam1",childnames1));
    // 2
    pair<string,string> childnames2("c2","10101987");
    famtree.insert(make_pair("fam2",childnames2));
    // 3
    pair<string,string> childnames3("c3","10101988");
    famtree.insert(make_pair("fam3",childnames3));
    // 4
    pair<string,string> childnames4("c4","10101989");
    famtree.insert(make_pair("fam4",childnames4));

    string famname;
    while(cin >> famname)
    {
        map<string,pair<string,string> >::iterator mapit = famtree.find(famname);
        if(mapit != famtree.end())
        {
            //Print child names
            cout << "Child name: " << (mapit->second).first << " Bday: " << (mapit->second).second << endl;
        }
        else
            cout << "Parent name not found" << endl;
    }
    return 0;
}
