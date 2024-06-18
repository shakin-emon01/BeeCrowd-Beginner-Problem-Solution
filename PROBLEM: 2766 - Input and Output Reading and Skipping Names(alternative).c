#include <stdio.h>
 #include <string.h>
int main() {
char a[10][50];
int i;
 for(i=0; i<10; i++)
 {
     scanf("%s",&a[i]);
 }
 printf("%s\n%s\n%s\n",a[2],a[6],a[8]);
    return 0;
}
