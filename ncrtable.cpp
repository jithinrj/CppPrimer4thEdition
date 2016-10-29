#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdlib>
using namespace std;

#define ROWS 999
#define COLS 1000
#define BITWIDTH 3000


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T; //Number of test cases
    cin >> T;
    //Allocate memory to T size array
    unsigned *n_array = new unsigned[T];
    int i; //loop var
    for(i=0; i < T; i++)
    {
        //Read test case numbers
        cin >> n_array[i];
    }

    char lut[ROWS][COLS][BITWIDTH];

    for(int i=0; i < ROWS; i++)
        for(int j=0; j < COLS; j++)
            for(int k=0; k < BITWIDTH; k++)
                lut[i][j][k] = 1;


#if 0
    for(int i=2; i <= ROWS; i++)
    {
        for(int j=1; j < i; j++)
        {
            lut[i][j] = lut[i-1][j] + lut[i-1][j-1];
        }
    }
    unsigned n,r;
    string temp;
    stringstream ss;
    ios_base::fmtflags ff = ss.flags();
    ff |= ios_base::fixed;
    ss.flags(ff);
    ff = cout.flags();
    ff |= ios_base::fixed;
    cout.flags(ff);
    ss.precision(1);
    for(i=0; i < T; i++)
    {
        n = n_array[i];
        long double k=1;
        unsigned long k1;
        for(r = 0; r <= n; r++)
        {
            if(n==r || r==0 || n==0)
                k=1;
            else
                k=lut[n][r];
            ss.str("");
            ss << k;
            temp = ss.str();
            if(temp.size() > 11)
            {
                char num[10];
                int i=0;
                for(string::iterator it=temp.end()-11; it != temp.end()-2; it++)
                {
                    if(*it == 0)
                    {
                        //Prefix zeros
                        continue;
                    }
                    num[i] = *it;
                    ++i;
                }
                num[i]='\0';
                ss.str("");
                ss << num;
                char *pEnd;
                k1 = strtol(num,&pEnd,10);
                ss.clear();
            }
            else
                k1=k;
            cout << k1 << " ";
        }
        cout << "\n";
    }
    delete [] n_array;
#endif // 0

    return 0;
}

