#include<iostream>
using namespace std;
bool arrayAreEqual(int arr1[],int arr2[],int m,int n){
	if(m!=n){
		cout<<"Array are not equal as the have diffrent size ";
		return false ;
	}
	int i,j;
	for(i=0;i<n;i++){
		if(arr1[i]==arr2[i]){
			continue;
		}else{
			return false;
		}
	}
	return true;
}
int main(){
	int arr1[5]={2,3,4,5,-4};
	int arr2[5]={2,3,4,5,-4};
	int check= arrayAreEqual(arr1,arr2,5,5);
	if(check==1){
		cout<<"Arrays ARE EQUAL";
	}
	else{
		cout<<"Arrays are not equal";
	}
}
