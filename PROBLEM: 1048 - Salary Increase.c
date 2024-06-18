#include <stdio.h>
 #include <math.h>
int main() {
double x, y,z;
scanf("%lf",&x);
 if(x>=0 && x<=400.00)
 {
    z=(15*x/100);
     y=x+z;
 printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",y,z); }
 else if(x>=400.01 && x<=800.00)
 {
     z=(12*x/100);
     y=x+z;
     printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n",y,z);
 }
 else if(x>=800.01 && x<=1200.00)
 {
 z=(10*x/100);
     y=x+z;
 printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n",y,z); } 
  else if(x>=1200.01 && x<=2000.00)
 {
     z=(7*x/100);
     y=x+z;
 printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n",y,z); }
 else if(x>=2000.01)
 {
   z=(4*x/100);
     y=x+z;
 printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",y,z);
 } 
    return 0;
}
