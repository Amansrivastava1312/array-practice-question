#include<stdio.h>
int main ()
{
    int size=0,i;
    printf("ENTER THE SIZE OF 1D ARRAY");
    scanf("%d",&size);
    int x[size],a[size],b[size];

    printf("SCAN THE ELEMENT OF ARRAY");

    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
int j,k;
for(i=0;i<size;i++)

{
    if(x[i]%2==0)
    {
        a[j]=x[i];
        j++;
    }
    else{
        b[k]=x[i];
        k++;
    }
}
printf("PRINT ALL EVEN IN ONE ARRAY");
for(i=0;i<j;i++)
{
    printf("%d",a[i]);
}
printf("PRINT ALL ODD NUMBER IN ONE ARRAY");
for(i=0;i<k;i++)
{
    printf("%d",b[i]);
}
return 0;}
