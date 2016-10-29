int main()
{
    int i=-1;
    const int ic=i;
    const int *pic=&ic;
    //int *const cpi=&ic; //illegal - ic is a const int. *cpi is not const
    int *const cpi=&i;//legal
    const int *const cpic=&ic;

    i=ic;
    pic=&ic;
    //cpi=pic; //illegal
    pic=cpic;
    //cpic = &ic; //illegal
    //ic=*cpic; //illegal

    return 0;
}
