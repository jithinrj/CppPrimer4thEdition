//exer 8.9
#include <iostream>
#include <fstream>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ifstream;

#include <string>
using std::string;
#include <vector>
using std::vector;

int main()
{
    vector<string> filestrings;
    string str;
    ifstream inpfile("exer8_9.txt"); //open input for reading
    while(getline(inpfile,str))
    {
        filestrings.push_back(str);
    }

    //debug
    for(vector<string>::const_iterator iter=filestrings.begin(); iter != filestrings.end(); iter++)
        cout << *iter << endl;
    return 0;
}
