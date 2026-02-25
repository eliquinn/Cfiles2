#include <stdio.h>

int main() 
{
	int x = 10;
	int *ptr = &x;	
	//Print the Address
	printf("%p\n", ptr);
	//Print what is located in the address
	printf("%d\n", *ptr);
	return 0;
}
