#include <stdio.h>
int main() {
float n1, n2, n3, n4, n5;
scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
float Media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10 ;
if (Media>=7.0 )
{
    printf("Media: %.1f\nAluno aprovado.\n",Media);
}
 else if(Media>=5.0 && Media<=6.9)
 {
     scanf("%f",&n5);
     float m = (Media+n5)/2 ;
    printf("Media: %.1f\nAluno em exame.\nNota do exame: %.1f\n",Media,n5);
    if(m>=5)
    {
        printf("Aluno aprovado.\n");
    }
    else {
        printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n",m);
}
 else
 {
    printf("Media: %.1f\nAluno reprovado.\n",Media);
}
    return 0;
}
