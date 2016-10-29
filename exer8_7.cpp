//exer 8.7
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
    vector<string> filevec(2);
    filevec[0]="exer8_6.txt";
    filevec[1]="exer8_7.txt";

    ifstream input;
    char s;
    vector<string>::const_iterator it=filevec.begin();
    while(it != filevec.end())
    {
        input.open(it->c_str()); //open file
        if(!input)
        {
            input.clear();
            it++;
            continue;
        }
        //debug
        cout << *it << endl;
        while(input >> s)
            cout << s; //output contents of file

        input.close();
        input.clear();
        ++it;
    }

    return 0;
}
