#include <stdio.h>
int main() {
int r,c;
scanf("%d%d",&r,&c);
if(r%2==0 && c%2==0)
{
    printf("1\n");
}
else if(r%2!=0 && c%2!=0)
{
    printf("1\n");
}
else
{
       printf("0\n");
}
    return 0;
}
