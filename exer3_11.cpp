//exercise 3.11
#include <vector>
#include <string>
using std::vector;
using std::string;

int main()
{
    vector <vector<int> > ivec; //vector of vector<int> type
    //vector<string> svec = ivec; //illegal
    vector<string> svec(10, "null");
    return 0;
}
