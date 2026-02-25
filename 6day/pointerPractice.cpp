#include<iostream>
using namespace std;
#define SQUARE(x) ((x)*(x))
int main(){
	int arr[5]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int *p=arr;
	int i;
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
		p++;
	}
	  int a = 5;
    printf("%d", SQUARE(a++));
}
