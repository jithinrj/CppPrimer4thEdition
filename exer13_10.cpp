#include "commonheader2.h"

class Employee
{
public:
    Employee(): name(""), num(0) {};
    Employee(const string& str): name(str), num(0){};
    //~Employee() { };
private:
    string name;
    int num;
};

int main()
{
    return 0;
}
