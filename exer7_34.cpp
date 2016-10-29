#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

void error(string errMessage, int, int);
void error(string errMessage);
void error(string errMessage, char);

int main()
{
    int index=7, upperBound=5;
    char selectVal='a';

    error("Subscript out of bounds : ", index, upperBound);
    error("Division by zero");
    error("Invalid selection", selectVal);

    return 0;
}

void error(string err, int index, int uppBnd)
{
    cout << err << " " << index << "; " << uppBnd << endl;

    return;
}

void error(string err)
{
    cout << err << endl;

}

void error(string err, char selVal)
{
    cout << err << " " << selVal << endl;
}
