#include "commonheader.h"
#include <utility>
using std::pair;
using std::make_pair;

int main()
{
    pair<int, string> strint;
    int n; string str;
    //Method 1
    cin >> str >> n;
    strint = make_pair(n, str);
    cout << strint.first << endl << strint.second << endl;
    //Method 2
    cin >> str >> n;
    strint = pair<int, string>(n, str);
    cout << strint.first << endl << strint.second << endl;
    //Method 3
    cin >> strint.first >> strint.second;
    cout << strint.first << endl << strint.second << endl;
    return 0;
}
