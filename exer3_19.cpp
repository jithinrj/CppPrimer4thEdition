//exercise 3.19
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

    cout << "Printing using nonconst iterators" << endl;
    //Printing using nonconst iterators
    for(vector<int>::iterator ivec_iter=ivec.begin();
        ivec_iter < ivec.end(); ivec_iter++)
        {
            cout << *ivec_iter << endl;
        }

    cout << "Printing using const iterators" << endl;
    //Printing using const iterators
    for(vector<int>::const_iterator ivec_citer=ivec.begin();
        ivec_citer < ivec.end(); ivec_citer++)
        {
            cout << *ivec_citer << endl;
        }

cout << "Printing using subscript index" << endl;
    //Printing using normal subscript index
    for(vector<int>::size_type index=0;
        index < ivec.size(); index++)
        {
            cout << ivec[index] << endl;
        }

    return 0;
}
