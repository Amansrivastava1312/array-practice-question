#include<stdio.h>
int main()
{

int size=0,i,large,min;
int x[size];
scanf("%d",&size);
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
 int temp,a,b;
 for(i=0;i<size;i++)
 {
     if(x[i]==large)
     {
         a=i;
     } 
     else if (x[i]==min)
     {
         b=i;
     }
 }

 temp=x[a];
 x[a]=x[b];
 x[b]=temp;

 for(i=0;i<size;i++)
{
    printf("%d",x[i]);

}

    return 0;

}