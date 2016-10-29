#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
    vector<int> vec1(5), vec2(2);
    //Form a test case
    vec1[0]=1;vec1[1]=2;vec1[2]=2;vec1[3]=3;vec1[4]=5;
    vec2[0]=1;vec2[1]=2;

    bool prefix_matches = true;
    vector<int> primary_vec;
    vector<int> secondary_vec;
    int primary; //to indicate which is prefix

    if(vec1.size() < vec2.size())
    {
        primary_vec = vec1;
        secondary_vec = vec2;
        primary=1;
    }
    else
    {
        primary_vec = vec2;
        secondary_vec = vec1;
        primary=2;
    }
    for(vector<int>::size_type index=0; index<primary_vec.size(); index++)
    {
        if(primary_vec[index] != secondary_vec[index])
        {
            prefix_matches = false;
            break;
        }
    }
    if(prefix_matches)
    {
        if(primary==1)
            cout << "vec1 is a prefix of vec2" << endl;
        else
            cout << "vec2 is a prefix of vec1" << endl;
    }
    else
    {
        if(primary==1)
            cout << "vec1 is NOT a prefix of vec2" << endl;
        else
            cout << "vec2 is NOT a prefix of vec1" << endl;
    }

    return 0;
}
