#include <stdio.h>
int main() {
long long int a,b,c;
scanf("%lld%lld%lld",&a,&b,&c);
if(a+b<=c || b+c<=a || c+a<=b)
{
    printf("Invalido\n");
}
else{
 if(a==b && b==c)   
   {
       printf("Valido-Equilatero\n");
   } 
 else if(a!=b && b!=c && c!=a)   
   {
       printf("Valido-Escaleno\n");
   }    
  else 
   {
       printf("Valido-Isoceles\n");
   }
   if( a*a==(b*b+c*c) || b*b==(c*c+a*a) || c*c==(a*a+b*b))
   {
   printf("Retangulo: S\n");
   }
   else 
   {
       printf("Retangulo: N\n");
   }
}
    return 0;
}
