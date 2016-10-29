#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
    //exercise 3-5 to read line at a time
    string line;
    //cout << "line at a time" << endl;
    //while(getline(cin, line))
        //cout << line << endl;

    cout << "word at a time" << endl;
    //to read a word at a time
    string word;
    while(cin >> word)
        cout << word << endl;

    return 0;
}
