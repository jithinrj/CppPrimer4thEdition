//exercise 3.17a
#include <vector>
#include <string>
#include <iostream> //debug

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<int> ivec; //allocate empty vector
    int input;
    cout << "Enter numbers, enter -1 to end: \n";
    cin >> input;
    while(input != -1)
    {
        ivec.push_back(input);
        cin >> input;
    }
    vector<int>::size_type len = ivec.size();
    if(len < 1)
    {
        cout << "Enter min 1 number" << endl;
        return 0;
    }
    vector<int>::iterator iveciter=ivec.begin();
    for(; iveciter < ivec.end()-1; iveciter+=2)
    {
        cout << *iveciter+*(iveciter+1) << endl;
    }
    if(iveciter != ivec.end())
    {
        //odd length case
        cout << *(ivec.end()-1) << endl;
    }
    #if 0
    int i;
    for(i=0; i < len-1; i+=2)
    {
        cout << ivec[i]+ivec[i+1] << endl;
    }
    if(i != len)
    {
        //odd length case
        cout << ivec[len-1] << endl;
    }
    #endif
    return 0;
}
