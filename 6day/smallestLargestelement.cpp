#include<iostream>

using namespace std;
int smallestArrayElement(int arr[],int n){
	int i;
	int min=arr[0];
	for(i=1;i<n;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	cout<<"smallest element in the array is "<<min;
}
int largestElementArray(int arr[],int n){
	int i;
	int max=arr[0];
	for(i=1;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	cout<<endl;
	cout<<"largest element in the array is "<<max;
}
int main(){
	int arr[5]={2,3,4,5,-4};
	smallestArrayElement(arr,5);
	largestElementArray(arr,5);
	
}
