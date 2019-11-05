#include<stdio.h>
int main()
{
    float money1,x,money2,sum,t;
    printf("enter x,t:");
    scanf("%f,%f",&x,&t);
    if (x<=13)
    {  if (x<=3){
        money1=10;}
        else{
            money1=10+(x-3)*2;}
    }
    else {
        money1=30+(x-13)*3;}
        money2=(t/5)*2;
        sum=money1+money2;
        printf("sum=%f\n",sum);
        return 0;
}
    