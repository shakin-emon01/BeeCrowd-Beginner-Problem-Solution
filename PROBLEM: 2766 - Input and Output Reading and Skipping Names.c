#include <stdio.h>
#include <string.h>
int main() {
    char inp[10][50];
int i;
for(i=0; i<10; i++){
    scanf("%s",inp[i]);
}
     printf("%s\n%s\n%s\n",inp[2], inp[6], inp[8]);
    return 0;
}
