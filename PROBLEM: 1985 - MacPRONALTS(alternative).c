#include <stdio.h>
int main() {
int b, i, n;
float a,s=0.0;
scanf("%d", &n);
for(i=1; i<=n; i++)
 {
     scanf("%f%d",&a,&b);
     while(a==1001)
     a=1.50;
      while(a==1002)
     a=2.50;
      while(a==1003)
     a=3.50;
    while(a==1004)
     a=4.50;
     while(a==1005)
     a=5.50;
     s = s+a*b;
 }
  printf ("%0.2f\n",s);
    return 0;
}
