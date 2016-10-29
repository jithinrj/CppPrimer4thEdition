int main()
{
    const char *cp="hello";
    int cnt;
    //while(cp){++cnt; ++cp;} //infinite loop
    while(*cp){++cnt;++cp;}

    return 0;

}
