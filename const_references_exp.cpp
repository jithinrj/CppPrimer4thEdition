//Exer 2.27, 2.28 of 5th Ed are excellent

int main()
{
    int i=1;
    const int ci=1;
    int &refi = i;
    const int &const_refi = i; //const ref to nonconst obj - legal
    //int &refconsti = ci; //non const ref to const int - illegal
    const int &r1=42; //legal

    return 0;
}
