#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
	array<double,5>arr={11.66,22,33,44,55};
	cout<<arr.size();
	cout<<endl;
	
//   for(int i=0;i<arr.size();i++){
//   	cout<<arr[i]<<" ";
//   }
   for(auto i:arr){
   	cout<<i<<" ";
   }
   cout<<endl;
   cout<<arr.front()<<endl;
   cout<<arr.back()<<endl;
   cout<<arr.at(2)<<endl;

}
