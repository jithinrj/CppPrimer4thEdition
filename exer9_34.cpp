#include "commonheader.h"
#include <ctype.h>

int main()
{
    string s1("abcEfgHijk");
    for(string::iterator its=s1.begin(); its != s1.end(); its++)
    {
        if(islower(*its))
        {
            *its = toupper(*its);
        }

    }

    cout << s1 << endl;
    return 0;
}
