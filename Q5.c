#include<stdio.h>
int main ()
{
    int size=0,i;
    printf("ENTER THE SIZE OF 1D ARRAY");
    scanf("%d",&size);
    int x[size],a=0,b=0,c=0;

    printf("SCAN THE ELEMENT OF ARRAY");

    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
     for(i=0;i<size;i++)
     {
         if(x[i]>0)
         {
             a++;
         }
         else if(x[i]<0)
     {
         b++;
     }
     else if(x[i]==0)
     {
         c++;
     }
     }

     printf("%d -- positive number \n%d --negative number \n%d -- zeroes",a,b,c);
     return 0;}
