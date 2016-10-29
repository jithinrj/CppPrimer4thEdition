#include <iostream>
using std::cin;
using std::cout;
using std::endl;


#include <string>
using std::string;

string &processText();

int main()
{
    cout << processText() << endl;

    return 0;

}

string &processText()
{
    string text;
    while(cin >> text)
    {
        //do something
    }
    return text;
}
