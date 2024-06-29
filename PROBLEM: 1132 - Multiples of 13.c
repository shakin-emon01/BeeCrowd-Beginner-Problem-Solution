#include <stdio.h>
int main()
{
  int x, y, a=0, i, Out;
 scanf("%d %d", &x, &y);
    if(x > y){
    Out = y;
    y = x;
    x = Out;
    }
  for(i=x; i<=y;i++)
  {
    if(i % 13!=0)
    a += i;
  }
 printf("%d\n",a);
    return 0;
}
