#include "commonheader.h"
#include <ctype.h>

int main()
{
    vector<char> cvec(10,'a');
    string cstr(cvec.begin(), cvec.end());

    cout << cstr << endl;

    return 0;
}
