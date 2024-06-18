#include <stdio.h>
#include<string.h>
int main() {
int i,n;
char a[100]="LIFE IS NOT A PROBLEM TO BE SOLVED";

while (scanf("%d",&n) != EOF){
for(i=0; i<n; i++)
 {
      printf("%c",a[i]);
 }
  printf("\n");
}
    return 0;
}
