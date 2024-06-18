#include <stdio.h>
int main() {
        int i,num,ev=0,odd=0,pos=0,neg=0;
        for(i=1;i<=5;i++){
            scanf("%d",&num);
            if(num%2==0){
                ev++;
            }
            if(num%2!=0){
                odd++;
            }
            if(0<num){
                pos++;
            }
            if(0>num){
                neg++;
            }
       } 
        printf("%d valor(es) par(es)\n",ev);
        printf("%d valor(es) impar(es)\n",odd);
        printf("%d valor(es) positivo(s)\n",pos);
        printf("%d valor(es) negativo(s)\n",neg);
    return 0;
}
