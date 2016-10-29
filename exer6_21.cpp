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
    bool word_occurred_twice=false;
    string str, strprev;
    while(cin >> str)
    {
        if(strprev.size()==0)
        {
            //first word
            strprev=str;
            continue;
        }
        if((str == strprev) && isupper(str[0]))
        {
            word_occurred_twice=true;
            break;
        }
        strprev=str;
    }
    if(word_occurred_twice)
        cout << str << " occurred twice" << endl;
    else
        cout << "No word occurred twice" << endl;

    return 0;
}
