
class NoDefault
{
public:
    NoDefault(int v): n(v) {}
private:
    int n;
};

class C
{
public:
    C() : nd(0) {} //default ctor
    private:
    NoDefault nd;
};

int main()
{
    C c1;

    return 0;
}
