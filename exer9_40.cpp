#include "commonheader.h"

int main()
{
    string q1("When lilacs last in the dooryard bloom'd");
    string q2("The child is father of the man");
    string sentence;

    string::size_type pos = q2.find("father");
    sentence.assign(q2, 0, pos); //"The child is the father of the "
    pos=q1.find("in the");
    sentence.append(q1,pos,15);

    cout << sentence << endl;
    return 0;
}
