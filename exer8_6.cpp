//exer 8.6
#include <iostream>
#include <fstream>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ifstream;

#include <string>
using std::string;

istream &readstrm(istream &);

int main()
{
    ifstream infile("exer8_6.txt");
    if(!infile)
    {
        cout << "File does not exist!" << endl;
        return -1;
    }
    readstrm(infile);

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
