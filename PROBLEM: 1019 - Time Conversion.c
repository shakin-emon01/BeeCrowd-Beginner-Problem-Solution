#include<stdio.h>
int main()
{
    int a,x,y,z;
    scanf("%d",&a);
    x=a/3600,y=(a/60)%60,z=a%60;
    printf("%d:%d:%d\n",x,y,z);
    return 0;
}
