//exercise 4.11
#include <iostream>
#include <string>

using std::string;

int main()
{
    int *ip;
    string s, *sp=0;
    int i; //double* dp=&i;
    int* ip1, ip2;
    const int i2=0, *ip3=i2; //there are more than one issues with this statement
    //i2 is const but ip3 is not const int*.
    //
    string *p=NULL;

    return 0;
}
