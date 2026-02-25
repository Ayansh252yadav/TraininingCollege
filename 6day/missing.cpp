#include<iostream>
#include<algorithm>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;
int missing(int n,int arr[]){
 
}
int main(){
	int arr[]={1,2,3,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int max1=0;
	int i;
	for( i=0;i<size;i++){
		max1=max(arr[i],max1);
	}
//	cout<<max1;
	vector<int>v;
	for(i=1;i<=max1;i++){
		v.push_back(i);
	}
//	for(auto i:v){
//		cout<<i<<" ";
//	}
	int j=0;
	i=0;
	vector<int>v2;
//	cout<<size;
	while(i<v.size() && j<size){
		if(arr[j]==v[i]){
			continue;
		}else{
			v2.push_back(v[j]);
		}
		i++;
		j++;
	}
	while(j<v.size()){
		v2.push_back(v[j]);
		j++;
	}
	for(auto k:v2){
		cout<<k<<" ";
	}
//	cout<<missing(size,arr);
}
