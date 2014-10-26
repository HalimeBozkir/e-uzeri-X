#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{

float fact=1.0,sum=0.0;
int x,i=1;
printf("x=");
scanf("%d",&x);

while(i<=100)
{
fact=fact*i;
sum=pow(x,i)+(0.1/fact);
i++;
sum=sum+1.0;
}

printf("The number e is %f and real is %f\n",sum,exp(1.0));

return 0;
}
