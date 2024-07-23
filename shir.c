#include <stdio.h>
#include<math.h>


int main()
{
	int num,n,rem[10],i,value=0,j,temp;
 	int count=0;
   	printf("The num is :\n");
   	scanf("%d",&num);
   	i=0;
   while(num>0)
   {
       rem[i]=num%2;
       num=num/2;
       i++;
       count++;
       
   }
   printf("The binary number is :\n");
   for(j=i-1;j>=0;j--)
   {
       printf("%d",rem[j]);
   }
   printf("\nThe count is :%d",count);
   printf("\nNow\n");
   
   for(i=0;i<=count;i++)
   {
       value=value+rem[i]*pow(2,i);
   }
   printf("The value is :%d",value);
   
   

    return 0;
}
