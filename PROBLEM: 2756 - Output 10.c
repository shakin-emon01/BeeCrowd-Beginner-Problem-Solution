#include <stdio.h>
int main()
{
    char a='A', b='B', c='C', d='D', e='E';
    printf("%8c\n",a);
    printf("%7c %c\n",b,b);
    printf("%6c%4c\n",c,c);
    printf("%5c%6c\n",d,d);
    printf("%4c%8c\n",e,e);
    printf("%5c%6c\n",d,d);
    printf("%6c%4c\n",c,c);
    printf("%7c %c\n",b,b);
    printf("%8c\n",a);
    return 0;
}
