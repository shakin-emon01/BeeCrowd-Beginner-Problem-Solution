#include <stdio.h>
int main()
{
    char NAME[100];
    double FS,T,TOTAL;
    scanf("%s%lf%lf",NAME,&FS,&T);
    TOTAL=FS+((T*15)/100);
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
