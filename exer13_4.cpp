#include "commonheader2.h"

struct NoName
{
    NoName(): pstring(new string), i(0), d(0){}; //default c'tor
    NoName(const NoName& N): pstring(N.pstring), i(N.i), d(N.d) {};
    int Disp() {return i;};
private:
    string *pstring;
    int i;
    double d;
};

int main()
{
    NoName nn1;
    NoName nn2(nn1);
    cout << nn2.Disp() << endl;
    return 0;
}
