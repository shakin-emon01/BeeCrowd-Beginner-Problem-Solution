#include<stdio.h>
int main(){
    int i, x, n;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &x);
       if(x==0) 
        printf("NULL\n");
        else if(x<0 && x%2 !=0)
        printf("ODD NEGATIVE\n");
        else if(x>0 && x%2 !=0)
        printf("ODD POSITIVE\n");
        else if(x<0 && x%2 ==0)
        printf("EVEN NEGATIVE\n");
         else if(x>0 && x%2 ==0)
        printf("EVEN POSITIVE\n");
    }
    return 0;
}
