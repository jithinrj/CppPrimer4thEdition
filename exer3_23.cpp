//exercise 3.23
#include <bitset>
#include <iostream>

using std::bitset;
using std::string;
using std::cin;
using std::cout;
using std::endl;


int main()
{
    bitset<64> bitvec(32);
    bitset<32> bv(1010101);
    string bstr; cin >> bstr; bitset<8> bv1(bstr);

    //Debug print
    for(unsigned int index=0; index < bv1.size(); index++)
        cout << bv1[index] << endl ;

    return 0;
}
