#include "commonheader.h"
#include <ctype.h>

int main()
{
    string s1("abcEfgHijk");
    for(string::iterator its=s1.begin(); its != s1.end(); its++)
    {
        if(isupper(*its))
        {
            s1.erase(its);
        }

    }

    cout << s1 << endl;
    return 0;
}
