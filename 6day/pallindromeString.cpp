#include<iostream>
using namespace std;
bool isPallindrome(string str){
	int left=0;
	int right=str.size()-1;
	while(left<=right){
		if(str[right]!=str[left]){
			return false;
		}
		right--;
		left++;
	}
	return true;
}
int main(){
	cout<<isPallindrome("abbac");
}
