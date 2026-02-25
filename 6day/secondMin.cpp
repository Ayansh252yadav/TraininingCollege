#include<iostream>
using namespace std;
int secondMin(int arr[],int n){
	int i;
	int max=arr[0];
	for(i=1;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	int secondMin=arr[1];
	for(i=0;i<n;i++){
	  if(secondMin<max && secondMin>arr[i]){
	  	secondMin=arr[i];
	  }
	}
	return secondMin;
}
int main(){
		int arr1[5]={2,3,4,5,-4};
		int t=secondMin(arr1,5);
		cout<<t;
}
