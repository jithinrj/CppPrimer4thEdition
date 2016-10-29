//exercise 8.3, 8.4
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::istream;

#include <string>
using std::string;

istream &readstrm(istream &);

int main()
{
    //istream is;
    readstrm(cin);

    return 0;
}

istream &readstrm(istream &is)
{
    char val;
    is.clear(); //reset all
    while(is >> val, !is.eof())
    {
        cout << val;
    }
    is.clear();
    return is;
}
