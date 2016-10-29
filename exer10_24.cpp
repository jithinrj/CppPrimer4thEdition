#include "commonheader2.h"

int main()
{
    set<string> excluded;
    excluded.insert("sucess");
    excluded.insert("class");
    string word;
    while(cin >> word)
    {
        if(!excluded.count(word))
        {
            word.resize(word.size()-1);
            cout << word << endl;
        }
        else
            cout << word << endl;
    }
    return 0;
}
