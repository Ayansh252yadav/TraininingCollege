#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
	list<int>li(5,20);//={1,2,3,4,5};
	li.push_back(10);
	li.push_back(20);
	li.push_front(5);
	li.insert(li.begin(),25);
	int nv=35;
	auto pos=next(li.begin(),2);
	li.insert(pos,nv);
	for(auto i:li){
		cout<<i<<"->";
	}
	
	cout<<"NULL"<<endl;
	return 0;
}

















