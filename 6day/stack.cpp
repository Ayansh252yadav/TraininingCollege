#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> s;
	int a;
	for(int i=1;i<=2;i++){
		cin>>a;
		s.push(a);
	}
	for(auto i:s)
	{
		cout<<i<<endl;
	}
	//s.push(10);
	while(!s.empty()){
		cout<<s.top()<<endl;
		 s.pop();
		
	}
	return 0;
}
