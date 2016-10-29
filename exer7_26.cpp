#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

string make_plural(size_t ctr, const string &word, const string &ending="s");

int main()
{
    cout << make_plural(5,"failure") << endl;
    cout << make_plural(5,"success","es") << endl;

    return 0;
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr==1)?word:word+ending;
}
