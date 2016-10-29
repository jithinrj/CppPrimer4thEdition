#include <iostream>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    const char *c_char1="string1", *c_char2="string2";
    char c_char[strlen(c_char1) + strlen(c_char2) + 1]; //extra 1 to hold null character
    strncpy(c_char, c_char1, strlen(c_char1)+1);//copy null character also
    strncat(c_char, c_char2, strlen(c_char2)+1); //copy null character

    string str1("string1"), str2("string2");
    str1 = str1 + str2;

    cout << c_char << endl << str1 << endl;
    return 0;
}
