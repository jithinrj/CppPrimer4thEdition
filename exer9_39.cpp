#include "commonheader.h"

int main()
{
    string line1 = "We were her pride of 10 she named us:";
    string line2 = "Benjamin, Phoenix, the Prodigal";
    string line3 = "and perspicacious pacific Suzanne";
    string sentence = line1 + ' ' + line2 + ' ' + line3;
    int wordcount=0;
    string largestword, smallestword, currword;
    int largestwordlen=0, smallestwordlen=10000;
    string::size_type startpos=0, endpos=0;
    while((endpos = sentence.find_first_of(" :,", startpos)) != string::npos)
    {
        currword = sentence.substr(startpos, endpos-startpos);

        if(currword.find_first_of(" :,") != string::npos)
        {
            startpos = endpos+1;
            continue;
        }
        if(currword.size() >= largestwordlen)
        {
            largestword = currword;
            largestwordlen = largestword.size();
        }


        if(currword.size() <= smallestwordlen)
        {
            smallestword = currword;
            smallestwordlen = smallestword.size();
        }


        startpos = endpos+1;

    }
    cout << largestword << endl;
    cout << smallestword << endl;
    return 0;
}
