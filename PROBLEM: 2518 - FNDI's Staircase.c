#include <stdio.h>
#include <math.h>
int main() {
    int n, h, c, l;
    while (scanf("%d %d %d %d", &n, &h, &c, &l) == 4) {
        printf("%.4f\n", (n * 1.0 * sqrt(c*c + h*h) * l) / 10000.0);
    }
    return 0;
}
