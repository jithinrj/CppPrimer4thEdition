#include "commonheader.h"

#include <stack>
using std::stack;

int main()
{
    stack<string> strstk;
    string word;
    while(cin >> word)
        strstk.push(word);

    while(!strstk.empty())
    {
        cout << strstk.top() << endl;
        strstk.pop();
    }

    return 0;
}
