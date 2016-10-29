//exercise 3.14
#include <vector>
#include <string>
#include <iostream> //debug

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<string> svec;
    string inp;
    while(cin>>inp)
    {
        for(string::size_type indx = 0; indx < inp.size(); indx++)
            inp[indx] = toupper(inp[indx]);
        svec.push_back(inp);
    }
    for(vector<string>::iterator svec_iter = svec.begin();
        svec_iter < svec.end(); svec_iter++)
        {
            for(string::size_type i=0; i < (*svec_iter).size(); i++)
            {
            if((i !=0) &&(i%8 ==0) )
                cout << endl;
            cout << (*svec_iter)[i];
            }
        cout << endl;
        }
#if 0
    for(vector<string>::size_type indx=0; indx < svec.size(); indx++)
    {
        for(string::size_type i=0; i < svec[indx].size(); i++)
        {
            if((i !=0) &&(i%8 ==0) )
                cout << endl;
            cout << svec[indx][i];
        }
        cout << endl;
    }
#endif
    return 0;
}

