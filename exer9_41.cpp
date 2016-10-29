#include "commonheader.h"

string greet(string form, string lastname, string title, string::size_type pos, int  length);

int main()
{

    string gen1("Dear Ms Daisy:");
    string gen2("MrsMsMissPeople");
    string lastName("AnnaP");
    string sentence = greet(gen1, lastName, gen2, 5, 4);

    cout << sentence << endl;
    return 0;
}

string greet(string form, string lastname, string title, string::size_type pos, int  length)
{
    form.replace(5,form.size()-4, title, pos, length);
    form.append(" ");
    form.append(lastname);
    form.append(":");
    return form;


}
