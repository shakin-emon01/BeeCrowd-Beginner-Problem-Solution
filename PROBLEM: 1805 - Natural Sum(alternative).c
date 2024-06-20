#include<stdio.h>
int main(){
long long i,a,c,b=0;
scanf("%lld %lld",&a,&c);
for(i=a; i<=c; i++){
    b=b+i;
}
printf("%lld\n",b);
return 0;
}
