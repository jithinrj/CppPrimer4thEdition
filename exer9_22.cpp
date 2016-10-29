#include "commonheader.h"

#include <list>
using std::list;
#include <deque>
using std::deque;

int main()
{
    vector<int> ivec(25,1);
    ivec.resize(100, 2);
    ivec.resize(10);

    return 0;
}
