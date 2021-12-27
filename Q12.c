#include<stdio.h>
int main()
{

int size=0,i,large,min;
int x[size];
printf("ENTER THE SIZE OF ARRAY");
scanf("%d",&size);
printf("enter the element of array");
for(i=0;i<size;i++)
{
    scanf("%d",&x[i]);

}
large=x[0];
min=x[0];

 for(i=1;i<size;i++)
 {
     if(x[0]<x[i])
     {
         large=x[i];
     }
     if(x[0]>x[i])
     {
         min=x[i];
     }

 }
 
 int min2=x[2];
  int max2=x[1];
 for(i=0;i<size;i++)
 {
     if(x[i]>min )
     {  
         if(x[i]<min2)
         {min2=x[i];}
     }

     if(x[i]<large)
     {
         if(x[i]>max2)
        { max2=x[i];}
     }

 }
 printf("%d is second minimum \n%d is second maximum",min2,max2);
    return 0;

}