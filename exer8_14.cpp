//exer8 14
#include <iostream>
#include <fstream>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ifstream;

#include <string>
using std::string;

ifstream &open_file(ifstream &, const string &);

int main()
{
    string fname="exer8_6.txt";
    ifstream inpfilehandle;
    open_file(inpfilehandle, fname);
    char s;
    if(!inpfilehandle)
        return -1;
    while(inpfilehandle >> s)
        cout << s << endl;

    return 0;

}

ifstream &open_file(ifstream &in, const string &fname)
{
    in.close();
    in.clear();

    in.open(fname.c_str());
    return in;
}
