#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main(){
//	int n;
//	cin>>n;
	int arr[9]={1,2,2,3,4,5,5,5,6};
	set<pair<int ,int>>s;
	int freq[9]={0};
	for(int i=0;i<9;i++){
		s.insert({arr[i],freq[arr[i]]++});
	}
	for(auto i:s){
		cout<<i.first<<" "<<i.second<<endl;
	}
}
