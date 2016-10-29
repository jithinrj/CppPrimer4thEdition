//exercise 3.18
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
    vector<int> ivec(10,10);
    for(vector<int>::iterator ivec_iter=ivec.begin();
        ivec_iter < ivec.end(); ivec_iter++)
        {
            *ivec_iter *=2 ;
        }

    return 0;
}
