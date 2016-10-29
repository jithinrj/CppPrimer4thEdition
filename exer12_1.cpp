//exer 12.1,12.2,12.3,12.4
#include "commonheader2.h"

class Person
{
public:
    //return name
    string get_name() const
    {
        return name;
    }
    //return address
    string get_Addr() const
    {
        return address;
    }
    //default constructor
    Person(string s1, string s2) : name(s1), address(s2) {}
    private:
    string name;
    string address;
};

int main()
{
    Person p1("abc","efg");
    cout << p1.get_name() << endl;
    cout << p1.get_Addr() << endl;

    return 0;
}
