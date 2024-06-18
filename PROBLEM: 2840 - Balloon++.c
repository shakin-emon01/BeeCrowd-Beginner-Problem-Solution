#include <stdio.h>
int main() {
   int R, L, V, O;
   scanf("%d%d", &R, &L);
   V = 4/ (float)3*3.1416*(R*R*R);
   O = L/V;
   printf("%d\n",O);
    return 0;
}
