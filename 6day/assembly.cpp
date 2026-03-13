#include<stdio.h>
int main(){
	int n;
	printf("Happy day");
	asm("move $10,%%eax":"=a"(n));
	printf("\nlocal var=%d",n);
	return 0;
}
