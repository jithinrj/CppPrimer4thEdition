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
    string str1, str2;
    do
    {
        cout << "Enter two strings\nString1: " << endl;
        getline(cin,str1);
        if(!cin)
            break;
        cout << "String2:" << endl;
        getline(cin, str2);
        if(!cin)
            break;
        if(str1 < str2)
            cout << "string1 is less than string 2" << endl;
        else if(str2 < str1)
            cout << "string2 is less than string1 " << endl;
        else
            cout << "string1 is same as string1" << endl;

    }while(cin);

    return 0;
}
