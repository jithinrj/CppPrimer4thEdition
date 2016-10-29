#include <iostream>

class Noname
{

public:
    Noname(): str("Noname"), ival(0), dp(nullptr), ifref(std::cin) {};
private:
    const std::string str;
    int ival;
    double *dp;
    std::istream& ifref;
};

int main()
{
    Noname n1;
    return 0;
}
