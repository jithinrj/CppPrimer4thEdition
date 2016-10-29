#include "commonheader.h"
#include <map>
using std::map;

#include <list>
using std::list;
#include <utility>
using std::pair;


int main()
{
    map<vector<int>::iterator, int> map1;

    map<list<int>::iterator, int> map2;
    map<pair<int, string>, int> map3;

    return 0;
}
