int main()
{
    int i=-1;
    const int ic=i;
    const int *pic=&ic;
    int *const cpi=&ic; //illegal - ic is a const int. *cpi is not const
    const int *const cpic=&ic;
}
