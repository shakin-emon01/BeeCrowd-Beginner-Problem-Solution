#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%3d.%3d.%3d-%2d",&a,&b,&c,&d);
    printf("%03d\n%03d\n%03d\n%02d\n",a,b,c,d);
    return 0;
}
