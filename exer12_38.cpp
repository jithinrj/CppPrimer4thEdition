#include "commonheader2.h"

class Foo
{
public:
    Foo(int n) { num = n;};
    int disp() {return num;};
private:
    int num;
};

int main()
{
    Foo a(10);
    cout << a.disp() << endl;
    return 0;
}
