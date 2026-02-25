#include<iostream>
using namespace std;
int stringLength(string str){
	int count=0;
	string s;
	int i=0;
	while(str!=s){
		count++;
		s+=str[i];
		i++;
	}
	cout<<"length of string "<<count;
}
int main(){
	stringLength("ayansh");
}
