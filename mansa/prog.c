#include <stdio.h>
main()
{
int n,rem,sum=0;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
sum=sum+(rem*rem*rem);
n/=10;
}
printf("arm number is %d\n",sum);
}

