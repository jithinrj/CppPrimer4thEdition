#include "commonheader.h"

bool checknum(vector<int>::iterator iter1, vector<int>::iterator iter2, int num);
int main()
{
    vector<int> ivec;
    ivec.push_back(1);
    ivec.push_back(1);
    ivec.push_back(2);
    ivec.push_back(3);
    ivec.push_back(5);
    ivec.push_back(8);
    vector<int>::iterator it1=ivec.begin(), it2=it1+2;
    if(checknum(it1, it2, 7))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}

bool checknum(vector<int>::iterator iter1, vector<int>::iterator iter2, int num)
{
    while(iter1 != iter2)
    {
        if(*iter1 == num)
            return true;

        iter1++;
    }
    return false;
}
