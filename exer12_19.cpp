#include <string>

class NoName
{
public:
    //Ctors
    NoName(): ival(0), dval(0.0) {};
    NoName(const std::string&): ival(0), dval(0.0) { };
private:
    std::string *pstring;
    int ival;
    double dval;
};

int main()
{
    NoName n1;
    NoName n2("abc");

    return 0;
}
