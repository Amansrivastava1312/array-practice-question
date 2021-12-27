#include<stdio.h>
int main ()
{
    int size=0,i;
    printf("ENTER THE SIZE OF 1D ARRAY");
    scanf("%d",&size);
    int x[size];

    printf("SCAN THE ELEMENT OF ARRAY");

    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }

printf("SHOW THE ELEMENT TIN REVERSE ORDER");

for(i=size-1;i>=0;i--)
{
    printf("%d",x[i]);
}
return 0;
}