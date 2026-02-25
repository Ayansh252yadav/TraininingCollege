#include<iostream>
using namespace std;
void alphabeticalSort(string str){
	int i,j;
	char temp;
	for(i=0;i<str.size();i++){
		for(j=i;j<str.size();j++){
			if(str[i]>str[j]){
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	cout<<"sorted string "<<str;
}
int main(){
	alphabeticalSort("bbbac");
}
