#include<stdio.h>
#define NUM 19
int no_of_set_bits(int num)
	{
	int count=0;
	
	while(num)
		{
		if(num%2 == 1)
			count++;
		num/=2;
		}
	return count;
	}

int main()
	{
	printf("no of set bits=%d\n",no_of_set_bits(NUM));
	return 0;
	}
