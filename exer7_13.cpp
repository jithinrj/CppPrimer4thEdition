#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int sum_array1(int *);
int sum_array2(int []);
int sum_array3(int (&arr)[10]);

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    cout << "Sum1 - " << sum_array1((int*)arr) << endl;
    cout << "Sum2 - " << sum_array2(arr) << endl;
    cout << "Sum3 - " << sum_array3(arr) << endl;

    return 0;
}

int sum_array1(int *parr)
{
    int sum=0;
    for(int i=0; i<10; i++)
        sum += parr[i];

    return sum;
}

int sum_array2(int arr[])
{
    int sum=0;
    for(int i=0; i<10; i++)
        sum += arr[i];

    return sum;
}

int sum_array3(int (&arr)[10])
{
    int sum=0;
    for(int i=0; i<10; i++)
        sum += arr[i];

    return sum;
}
