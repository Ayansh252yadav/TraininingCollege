#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
	list<int>l1={5,4,3,2,1};
	list<int>l2={1,2,3,2,2};
	
//	l2.splice(l2.end(),l1);
//		for(auto i:l2)
//		cout<<i<<" ";
//		
		int x=50;
		auto ptr=find(l1.begin(),l1.end(),x);
		int newSize=distance(l1.begin(),ptr);
		if(ptr!=l1.end()){
   	cout<<"value find at index "<<newSize;
   }else{
   	cout<<"not found";
   }
//	l1.swap(l2);
//	for(auto :l2){
//		cout<<i<<" ";
//	}
//	l2.sort();
//		for(auto i:l2){
//		cout<<i<<" ";i
//	}
//	cout<<endl;
//	l2.reverse();
//		for(auto i:l2){
//		cout<<i<<" ";
//	}
//	cout<<endl;
//	l2.remove(1);
//		for(auto i:l2){
//		cout<<i<<" ";
//	}
//	cout<<endl;
	
	
	return 0;
}
