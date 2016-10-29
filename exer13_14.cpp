#include "commonheader2.h"

struct Exmpl
{
    Exmpl() {cout << "Exmpl()" << endl;};
    Exmpl(const Exmpl&) { cout << "Exmpl(const Exmpl&)" << endl;};
    Exmpl& operator=(const Exmpl&) { cout << "Exmpl =" << endl;};
    ~Exmpl() {cout << "~Exmpl" << endl;}
};

Exmpl foo1(const Exmpl&);
Exmpl &foo2( Exmpl);
int main()
{
    Exmpl ex1, ex2;
    //cout << "Function call" << endl;
    //ex2=foo2(ex1);
    Exmpl *pex = new Exmpl;
    delete pex; //If we didn't put this line here, pex would still remain in memory


    return 0;
}

Exmpl foo1(const Exmpl& ex)
{
    return ex;
}

Exmpl &foo2( Exmpl ex)
{
    return ex;
}
