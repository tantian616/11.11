#include<stdio.h>
int max (int a[],int n)
{
int i,max=a[0];
for(i=1;i<n;i++)
{
    if(a[i]>max)
    max=a[i];
}
return max;
}
int main()
{
    int a[10],i,t;
    {
    printf("enter array a:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    }
    t=max(a,10);
    printf("%d",t);
    return 0;
}