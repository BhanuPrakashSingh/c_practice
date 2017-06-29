#include<stdio.h>
#include<stdlib.h>
void _start()
{
int x=my_fun();
exit(x);
}
int my_fun()
{
printf("hello world");
return 0;
}
