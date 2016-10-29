#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    char ch;
    string str;
    int ffcnt=0, flcnt=0, ficnt=0;
    while(getline(cin, str))
    {
        for(string::size_type i=0; i < str.size()-1; i=i+2)
        {
            ch=str[i+1];
            if(str[i]=='f')
            {
                switch(ch)
                {
                case 'f':
                    ffcnt++;
                    break;
                case 'l':
                    flcnt++;
                    break;
                case 'i':
                    ficnt++;
                    break;
                }
            }
        }
    }

    cout << ffcnt << endl << flcnt << endl << ficnt << endl;

    return 0;
}
