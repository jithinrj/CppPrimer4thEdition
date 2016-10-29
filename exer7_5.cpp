#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int find_larger(int, int*);

int main()
{
    int a=9, b=6;
    cout << find_larger(a,&b) << endl;

    return 0;
}

int find_larger(int x, int *p)
{
    return (x > *p)? x : *p;
}
