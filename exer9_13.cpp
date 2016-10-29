#include "commonheader.h"

vector<int>::iterator checknum(vector<int>::iterator iter1, vector<int>::iterator iter2, int num);
int main()
{
    vector<int> ivec;
    ivec.push_back(1);
    ivec.push_back(1);
    ivec.push_back(2);
    ivec.push_back(3);
    ivec.push_back(5);
    ivec.push_back(8);
    vector<int>::iterator it1=ivec.begin(), it2=it1+6, it_result;
    it_result=checknum(it1, it2, 8);
    if(it_result != it2)
        cout << "Found " << *it_result << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}

vector<int>::iterator checknum(vector<int>::iterator iter1, vector<int>::iterator iter2, int num)
{
    while(iter1 != iter2)
    {
        if(*iter1 == num)
            return iter1;

        iter1++;
    }
    return iter2;
}
