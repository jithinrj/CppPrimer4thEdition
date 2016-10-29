#include <iostream>
#include <string>

//exercise 3.10
using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
    string strin("!!hello!!, world!");
    string strout;
    //cin >> strin;
    string::size_type i,j;
    for(i=0,j=0; i < strin.size(); i++)
    {
        //cout << "debug :" << strin[i] << j << i << endl;
        if (not(ispunct(strin[i])))
        {
            strout = strout + strin[i];
            j++;
        }

    }

    cout << strout << endl;
    return 0;
}
