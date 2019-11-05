#include<stdio.h>
int main ()
{
float v,y;
printf("enter v:");
scanf("%f",&v);
if (v<=50)
{
    y=0.53*v;
}
else{
    y=26.5+(v-50)*0.58;
}
printf("y=%f\n",y);
return 0;
}