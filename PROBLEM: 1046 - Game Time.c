#include <stdio.h>
int main() {
int a,b,c;
scanf("%d %d", &a,&b);
c = (24-a)+b;
 if(c<=24)
 {
     printf("O JOGO DUROU %d HORA(S)\n",c);
 }
 else
 {
     printf("O JOGO DUROU %d HORA(S)\n",c-24);
 }
    return 0;
}
