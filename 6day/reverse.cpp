#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
	array<double>arr={1,3};
	//cout<<arr.size();
	//cout<<endl;
	int c=count(arr.begin(),arr.end(),200);
	cout<<c;
	cout<<endl;
	auto ptr=max_element(arr.begin(),arr.end());
	cout<<arr[(ptr-arr.begin())];
	cout<<endl;
		auto ptr1=min_element(arr.begin(),arr.end());
	cout<<arr[(ptr1-arr.begin())];
    //reverse(arr.begin(),arr.end());
    for(auto i:arr){
   	cout<<i<<" ";
   }
//   int se=55;
//   auto ptr=find(arr.begin(),arr.end(),se);
//   cout<<arr.begin()<<" "<<ptr;
//   if(ptr!=arr.end()){
//   	cout<<"value find at index "<<ptr-arr.begin();
//   }else{
//   	cout<<"not found";
//   }

}
