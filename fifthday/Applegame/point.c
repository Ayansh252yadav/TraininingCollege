#include<stdio.h>
int main(){
	int a=10,b=20,c=30;
	int arr[5]={1,2,3,4,5};
	//pointer to array of first element
	int *ptr=&arr;
	int i;
	for( i=0;i<5;i++){
		printf("%d ",*(ptr+i));
	}
	//array of pointer
	int *ptr1[4]={&a,&b,&c};
	printf("\n");
	for(i=0;i<3;i++){
		printf("%d ",*(*(ptr1+i)));
	}
	//pointer to array of whole array
	int (*ptr2)[5]=&arr;
	printf("\n");
	for(i=0;i<10;i++){
		printf("%d ",*((*ptr2+i)));
	}
		return 0;
}
