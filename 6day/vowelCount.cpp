#include<iostream>
using namespace std;
int vowelCount(string str){
	int count=0;
	int i;
	for(i=0;i<str.size();i++){
		if(str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u'){
			count++;
		}else if(str[i]=='A' || str[i]=='E'|| str[i]=='I' || str[i]=='O' || str[i]=='U'){
			count++;
		}
	}
	cout<<"Number of vowels "<<count;
}
int main(){
	vowelCount("ayanshI");
}
