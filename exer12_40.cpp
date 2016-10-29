#include "commonheader2.h"

class Foo
{
public:
    Foo(int n) { num = n;};
    int disp() {return num;};
private:
    int num;
};

class Bar
{
    static int n;
    static Foo f;
    static int callsFooVal;
    static Foo FooVal();
};

int Bar::callsFooVal = 0;
Foo Bar::FooVal()
{
    callsFooVal++;
    Foo dummy(0);
    return dummy;
}
int main()
{
    Foo a(10);
    cout << a.disp() << endl;
    return 0;
}
