#include<iostream>
#include<map>
using namespace std;
int main(){
	map<int ,string>mp;
	mp.insert(make_pair(1,"one"));
	mp.insert(make_pair(2,"two"));
	mp.insert(make_pair(3,"three"));
	mp.insert(make_pair(4,"four"));
	

	int key=3;
	auto it=mp.find(key);
	if(it!=mp.end()){
		mp.erase(it);
	}
		for(auto pair:mp){
		cout<<"{"<<pair.first<<":"<<pair.second<<"}"<<endl;
	}
}
