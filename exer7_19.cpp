#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int &get(int *, int);
int main()
{
    int ia[10];
    for(int i=0; i<10; i++)
        get(ia,i)=0;

    cout << ia[1] << endl; //debug print
    return 0;
}

int &get(int *arr,int index){return arr[index];}
