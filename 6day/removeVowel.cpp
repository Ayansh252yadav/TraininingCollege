#include<iostream>
using namespace std;
void removeVowel(string str){
	int i,j,k;
	int n=str.size();
	for(i=0;i<n;i++){
		if(str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u'){
			for(j=i;j<n;j++){
				str[j]=str[j+1];
			}
			n=n-1;
		}else if(str[i]=='A' || str[i]=='E'|| str[i]=='I' || str[i]=='O' || str[i]=='U'){
			for(k=i;k<n;k++){
				str[k]=str[k+1];
			}
			n=n-1;
		}
	}
	cout<<"string after removing vowels"<<str;
}
int main(){
	removeVowel("ayansh");
}
