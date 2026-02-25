#include<iostream>
using namespace std;
int sumArrayElement(int arr[],int n){
	int sum=0;
	int i;
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	cout<<"sum of all array element is "<<sum;
}
int main(){
		int arr[5]={2,3,4,5,-4};
		sumArrayElement(arr,5);
}
