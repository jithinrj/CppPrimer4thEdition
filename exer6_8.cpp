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
    int acnt=0, ecnt=0, icnt=0, ocnt=0, ucnt=0, spacecnt=0,tabcnt=0, newlinecnt=0;
    while(getline(cin, str))
    {
        for(string::size_type i=0; i < str.size(); i++)
        {
            ch=str[i];
            switch(ch)
            {
            case 'a':
            case 'A':
                acnt++;
                break;
            case 'e':
            case 'E':
                ecnt++;
                break;
            case 'i':
            case 'I':
                icnt++;
                break;
            case 'o':
            case 'O':
                ocnt++;
                break;
            case 'u':
            case 'U':
                ucnt++;
                break;
            case ' ':
                spacecnt++;
                break;
            case '\t':
                tabcnt++;
                break;
            case '\n':
            case '\r':
                newlinecnt++;
                break;
            }
        }
    }

    cout << acnt << endl << ecnt << endl << icnt << endl << ocnt << endl << ucnt << endl ;
    cout << spacecnt << endl << newlinecnt << endl << tabcnt << endl;

    return 0;
}
