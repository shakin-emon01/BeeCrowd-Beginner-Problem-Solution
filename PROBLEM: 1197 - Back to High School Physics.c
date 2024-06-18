#include <stdio.h>
int main() {
 int v, t;
 while(scanf("%d%d",&v, &t) !=EOF) {
 int u = 2*(v*t);
 printf("%d\n",u);
 }
    return 0;
}
