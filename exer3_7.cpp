#include <iostream>
#include <string>

//exercise 3.7
using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
    string str1, str2;
    cout << "Enter string 1: " << endl;
    cin >> str1;
    cout << "Enter string 2: " << endl;
    cin >> str2;
    if( str1 == str2)
        cout << "strings are equal" << endl;
    else if(str1 < str2)
        cout << "string1 is less than string2" << endl;
    else
        cout << "string1 is greater than string2" << endl;

    //Part B
    if( str1.size() == str2.size())
        cout << "strings are equal length" << endl;
    else if(str1.size() < str2.size())
        cout << "string2 is longer than string1" << endl;
    else
        cout << "string1 is longer than string2" << endl;

    return 0;
}
