#include<iostream>

using namespace std;
void toggleString(string str){
	int i;
	char temp;
	for(i=0;i<str.size();i++){
		if(str[i]>=65 && str[i]<=97){
			str[i]+=32;
		}else{
			str[i]-=32;
		}
	}
	cout<<"toggle way of string is "<<str;
}
int main(){
	toggleString("sTrInG$");
}
