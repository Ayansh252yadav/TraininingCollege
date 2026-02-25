#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;
int main()
{
	vector<float> v={1,2};
	vector<float> v1={1.06,2,3,4};
	//v.clear();
//	list<int>ls={1,2,3,4,5};
//	list<int>lst={6,7,8,9,10};
//	copy(ls.begin(),ls.end(),front_inserter(lst));
//	for(auto i:lst){
//		cout<<i<<" ";
//	}
	copy(v1.begin(),v1.end(),back_inserter(v));
//	int nv=1000;
//	auto pos=next(v.begin(),3);
//	v.insert(pos,nv);
//	int x=equal(v.begin(),v.end(),v1.begin());
//	cout<<x<<endl;
	//cout<<!v.empty()<<endl;
//	cout<<v.size()<<endl;
//	v.resize(1);
//	cout<<v.size()<<endl;
	
	//v.erase(v.begin());
	//v.swap(v1);
	
	
	//reverse(v.begin(),v.end());
	
	
//	cout<<"enter 5 number to insert it in vector";
//	for(int i=0;i<2;i++){
//		cin>>n;
//		v.push_back(n);
//	}
//	v.insert(v.begin(),1000);
//	cout<<v.size();
//	v.resize(5);
//	cout<<v.size();
	
	
	for(auto i:v){
		cout<<i<<" ";
	}

	return 0;
}

