#include "commonheader.h"
#include <utility>
using std::pair;
using std::make_pair;

int main()
{
    pair<int, string> strint;
    int n; string str;
    while(cin >> str >> n)
        strint = make_pair(n, str);

    cout << strint.first << endl << strint.second << endl;
    return 0;
}
