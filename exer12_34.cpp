#include <string>
#include <iostream>

class Salesitem
{
public:
    Salesitem(const std::string &book=""):
        isbn(book), units(1) {};
    Salesitem(std::istream &is = std::cin) {};
    friend int sum1(Salesitem s1, Salesitem s2);
private:
    std::string isbn;
    int units;
};

//int sum1(Salesitem s1, Salesitem s2);

int main()
{
    Salesitem b1("abc"), b2("efg");
    std::cout << sum1(b1, b2) << std::endl;

    return 0;
}

int sum1(Salesitem s1, Salesitem s2)
{
    return s1.units + s2.units;
}
