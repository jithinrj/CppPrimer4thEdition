#include "commonheader2.h"

#include <sstream>
using std::istringstream;

ifstream &open_file(ifstream &, const string &);

class TextQuery {
public:
    typedef vector<string>::size_type line_no;
    void read_file(ifstream &is)
    {
        store_file(is);
        build_map();
    }
    set<line_no> run_query(const string&)const;
    string text_line(line_no) const;

private:
    void store_file(ifstream&);
    void build_map();

    vector<string> lines_of_txt;
    map<string, set<line_no> > word_map;
};

int main()
{
    ifstream infile;
    if(!open_file(infile,"loremipsum.txt"))
    {
        cout << "Error opening file! " << endl;
        return -1;
    }
    TextQuery tq;
    tq.read_file(infile);
    string qword;
    cout << "Enter a word to look for : " << endl;
    while(cin >> qword)
    {
        set<TextQuery::line_no> locs = tq.run_query(qword);
        cout << "Locations of (Total Locations = " << locs.size() << ") " << qword << " are :" << endl;
        for(set<TextQuery::line_no>::iterator it=locs.begin(); it != locs.end();++it)
            cout << "(line " << *it << ") " << tq.text_line(*it) << endl;
    }
    infile.close();
    return 0;
}

void TextQuery::store_file(ifstream &is)
{
    string currline;
    while(getline(is,currline))
    {
        lines_of_txt.push_back(currline);
        //debug
        //cout << currline;
    }
}

void TextQuery::build_map()
{
    //Outer loop - access each line from vector line of texts
    for(line_no lin=0; lin < lines_of_txt.size(); lin++)
    {

        string currline(lines_of_txt[lin]), word;
        istringstream str(currline);
        //debug
        //cout << "currline= " << currline << " line=" << lin << endl;
        while(str >> word)
        {
            word_map[word].insert(lin+1);
        }
    }
}

set<TextQuery::line_no> TextQuery::run_query(const string& inword) const
{
    string qword = inword;
    map<string,set<line_no> >::const_iterator it=word_map.find(qword);
    if(it != word_map.end())
    {
        //word is present in map
        return it->second;
    }
    else
    {
        set<line_no> s;
        return s;
    }
}

string TextQuery::text_line(line_no lin) const
{
    return lines_of_txt[lin-1];
}
ifstream &open_file(ifstream &in, const string &fname)
{
    in.close();
    in.clear();

    in.open(fname.c_str());
    return in;
}
