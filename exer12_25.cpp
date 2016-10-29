#include <string>
#include <iostream>

class Salesitem
{
public:
    Salesitem(const std::string &book=""):
        isbn(book), units(0) {};
    Salesitem(std::istream &is = std::cin) {};
private:
    std::string isbn;
    int units;
};

int main()
{
    Salesitem s1("abc");
    return 0;
}
