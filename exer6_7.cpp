#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    char ch;
    int acnt=0, ecnt=0, icnt=0, ocnt=0, ucnt=0;
    while(cin >> ch)
    {
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
        }
    }

    cout << acnt << endl << ecnt << endl << icnt << endl << ocnt << endl << ucnt << endl ;

    return 0;
}
