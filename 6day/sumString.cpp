#include<iostream>
using namespace std;
void sumString(string str){
	int i;
	int sum=0;
	for(i=0;i<str.size();i++){
		if(str[i]>=48 && str[i]<=57)
		sum+=str[i]-'0';
	}
	cout<<"sum of string "<<sum;
}
int main(){
	sumString("123a4");
}
