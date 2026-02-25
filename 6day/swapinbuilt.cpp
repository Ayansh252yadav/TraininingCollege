#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
	array<double,5>arr={44,44,22,65,55};
	
//	arr.swap(arr1);
	auto newEnd=remove(arr.begin(),arr.end(),44);
	cout<<*newEnd<<endl;
	int newSize=distance(arr.begin(),newEnd);

   
   for(int i=0;i<arr.size();i++){
   	cout<<arr[i]<<" ";
   }

}
