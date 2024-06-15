#include<stdio.h>
int main()
{
 float numbers[6];
 int positive = 0, i;
 for (i = 0; i<6; i++)
{
scanf("%f",&numbers[i]);
}
for (i = 0; i<6; i++)
{
    if (numbers[i] >0)
    {
        positive++;
    }
}
 printf("%d valores positivos\n", positive);
}
