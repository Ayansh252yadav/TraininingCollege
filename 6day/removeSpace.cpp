#include<iostream>
using namespace std;
void removeSpace(string str){
	int i,j;
	int n=str.size();
	for(i=0;i<n;i++){
		if(str[i]==' ' || str[i]=='_' || str[i]=='-'){
			for(j=i;j<n;j++){
				str[j]=str[j+1];
			}
			n=n-1;
		}
	}
	cout<<"string agter removed unncessary space"<<str;
}
int main(){
	removeSpace("abb c_d");
}
