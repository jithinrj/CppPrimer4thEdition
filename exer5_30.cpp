#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
    vector<string> svec(10);
    vector<string> *pvec1 = new vector<string>(10);
    //vector<string> **pvec2 = new vector<string>[10];
    vector<string> *pv1 = &svec;
    vector<string> *pv2 = pvec1;

    //delete svec; //cannot delete, svec is not pointer(dynamically allocated)
    delete pvec1;
    //delete [] pvec2;
    delete pv1;
    //delete pv2; //pvec1 was already deleted

    return 0;
}
