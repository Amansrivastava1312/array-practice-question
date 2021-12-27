#include<stdio.h>
int main ()
{
    int size=0,i,sum=0,avg=0;
    printf("ENTER THE SIZE OF 1D ARRAY");
    scanf("%d",&size);
    int x[size];

    printf("SCAN THE ELEMENT OF ARRAY");

    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }

for(i=0;i<size;i++)
{
    sum+=x[i];
}

avg=sum/size;

printf("sum is %d and average is %d",sum,avg);
return 0;
}
