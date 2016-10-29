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
    std::string null_isbn="9-999";
    Salesitem null1(null_isbn);
    Salesitem null("9-999");

    return 0;
}
