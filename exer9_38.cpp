#include "commonheader.h"

int main()
{
    string s1="ab2c3d7R4E6";
    string numeric="0123456789";
    string::size_type numpos=0, alphapos=0;
    string alphabet="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while((numpos= s1.find_first_of(numeric,numpos)) != string::npos)
    {
        cout << "Found number at index : " << numpos << " " << s1[numpos] << endl;
        ++numpos;
    }
    while((alphapos= s1.find_first_of(alphabet,alphapos)) != string::npos)
    {
        cout << "Found alphabet at index : " << alphapos << " " << s1[alphapos] << endl;
        ++alphapos;
    }

    return 0;
}
