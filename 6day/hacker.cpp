#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int min1(vector<int>arr){
	   int min2=999999;
   
     for(int i=0;i<arr.size();i++){
         min2=min(min2,arr[i]);
     }
     return min2;
}
vector<int> cutTheSticks(vector<int> arr) {
    int min3=0;
    vector<int>res;

    
//    sort(arr.begin(),arr.end());
    while(!arr.empty()){
    	min3=min1(arr);
    	int n=arr.size();
    	res.push_back(n);
    	for(int i = 0; i < arr.size(); i++){
            arr[i] = arr[i] - min3;
        }
    	arr.erase(remove(arr.begin(),arr.end(),0),arr.end());
//    	min1=arr[0];
	}
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
    return res;
}

int main()
{     vector<int>arr;
     int n;
 cin>>n;
 int x;
 for(int i=0;i<n;i++){
     cin>>x;
     arr.push_back(x);
 }
  cutTheSticks(arr);
       return 0;
}
