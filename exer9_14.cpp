#include "commonheader.h"

int main()
{
    string strin;
    vector<string> svec;
    while(cin >> strin)
    {
        svec.push_back(strin);
    }
    for(vector<string>::iterator it=svec.begin(); it != svec.end(); ++it)
        cout << *it << endl;

    return 0;
}
