#include <stdio.h>
int main(){
int distance;
scanf("%d",&distance);
int relative_speed=90-60;
float time_hours=(float)distance / relative_speed;
int time_minutes=(int)(time_hours*60);
printf("%d minutos\n",time_minutes);
return 0;
}
