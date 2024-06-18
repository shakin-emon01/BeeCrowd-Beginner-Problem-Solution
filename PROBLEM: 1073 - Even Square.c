#include <stdio.h>
int main() {
int n,o;
scanf("%d", &n);
for(int i=2; i<=n; i+=2)
{
o=i*i;
  printf("%d^2 = %d\n",i,o);
}
    return 0;
}
