#include <stdexcept>
#include <bitset>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    try
    {
        std::bitset<660> foo;
        foo.set();
        cout << "Val is " << foo.to_ulong() << endl;
        throw std::runtime_error("Too long\n");
    }
    catch(std::runtime_error err)
    {
        cout << err.what() << endl;
    }

    return 0;
}
