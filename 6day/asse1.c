#include<stdio.h>
int main(){
	int x,y;
	printf("Happy day");
	asm("movl $10,%%eax":"=a"(x));
	asm("movl $12,%%ebx":"=b"(y));
	printf("\nlocal var=%d",x+y);
	return 0;
}
