#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> v1={1,5,3,4,2};
vector<int> v2={1,5,3,4,2};
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end(),greater<int>());
int sum=0;
int temp;
int i;
 for( i=0;i<v1.size();i++){
   sum+=v1.at(i)*v2.at(i);
//   sum+=temp;	
 }
 cout<<sum;
}


