#include <stdio.h>
int main()
{
    int A, B, C;
    -10000 <= A <= 10000;
     0 <= B <= 99;
     0 <= C <= 999;
     scanf("%d %d %d", &A, &B, &C);
    printf("A = %d, B = %d, C = %d\n",A,B,C);
    printf("A = %10d, B = %10d, C = %10d\n",A,B,C);
    printf("A = %010d, B = %010d, C = %010d\n",A,B,C);
    printf("A = %-10d, B = %-10d, C = %-10d\n",A,B,C);
    return 0;
}
