//#include <iostream>

class Screen
{
public:
    typedef std::size_t index;
    Screen() { height = 5; width=5; contents.resize(height*width);}
    Screen& move(index r, index c);
    Screen& set(char c);
    //const Screen& display(std::ostream &os) const;
    Screen& display(std::ostream &os);
private:
    std::string contents;
    index cursor;
    index height, width;
};

Screen& Screen::move(index r, index c)
{
    cursor = c + r*width;
    return *this;
}

Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

Screen& Screen::display(std::ostream &os)
{
    os << contents;
    return *this;
}
