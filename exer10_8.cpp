#include "commonheader2.h"

int main()
{
    pair <string, int> strcnt;
    strcnt.first="abc"; strcnt.second=3;
    map<string,int> map1;
    map<string,int>::iterator it=map1.begin();
    it->second = 3;

    return 0;
}
