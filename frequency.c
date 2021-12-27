#include<stdio.h>
int main()
{
  int size,i,j,count;
    printf("enter  size of the array \n");
    scanf("%d",&size);
    int x[size],y[size];
   
    printf("enter elements of the array \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
int visted=0;
for(i=0;i<size;i++)
{ 
    count=1;
    for(j=i+1;j<size;j++)
    {
        if (x[i]==x[j])
        {  
            count++;
            y[j]=0;
        }
    }
        if (y[i]!=0)
        {
            y[i]=count;
        }
        
    
}
    for(i=0;i<size;i++)
    {
        if(y[i]!=0)
        {
            printf("%d occur %d times\n",x[i],y[i]); 
        }
    }
return 0;
}