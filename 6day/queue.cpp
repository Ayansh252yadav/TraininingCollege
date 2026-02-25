#include<bits/stdc++.h>
using namespace std;
int main()
{
	deque<int> q;
	q.push_front(20);
	q.push_front(30);
	q.push_back(50);
	q.insert(q.begin(),10);
	q.erase(q.begin());
	//q.clear();
	sort(q.begin(),q.end());
	//cout<<*q.begin()<<endl;
	while(!q.empty()){
		cout<<q.front()<<endl;
		 q.pop_front();	
	}
	//cout<<q.empty()<<endl;
	return 0;
}
