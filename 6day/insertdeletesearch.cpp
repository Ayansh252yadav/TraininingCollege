#include<iostream>
using namespace std;
void insertElement(int element,int idx,int arr[],int n){
	int i;
	for(int i=n-1;i>=idx;i--){
		arr[i+1]=arr[i];
	}
	arr[idx]=element;
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
void deleteElement(int element,int n,int arr[]){
	int i,j;
	for(int i=0;i<n;i++){
		if(arr[i]==element){
			for(j=i;j<n;j++){
				arr[j]=arr[j+1];
			}
			n--;
		}
	}
	cout<<endl;
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int search(int element ,int n,int arr[]){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==element){
			return i;
			break;
		}
	}
	return -1;
}
int main(){
	int arr[6]={1,2,3,4,5,0};
	int idx=3;
	insertElement(6,idx-1,arr,6);
	deleteElement(3,6,arr);
	cout<<endl;
	int check=search(4,6,arr);
	if(check==0){
		cout<<"element not found";
	}else{
		cout<<"element exist ar index "<<check+1;
	}
	
}
