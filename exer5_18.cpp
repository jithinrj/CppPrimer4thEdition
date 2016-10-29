#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
    vector<string*> pstrvec;
    string str1="abc";
    pstrvec.push_back(&str1);
    string str2="Def";
    pstrvec.push_back(&str2);
    for(vector<string*>::iterator iter=pstrvec.begin();iter != pstrvec.end(); iter++)
    {
        cout << **iter << endl;
    }

    return 0;
}
