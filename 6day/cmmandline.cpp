#include<iostream>
#include<string>
using namespace std;
int main(int argc,char *argv[]){
	cout<<"NO  of argument "<<argc<<endl;
	
	 int a=atoi(argv[1]);
	 int b=atoi(argv[2]);
	 int sum=a+b;
	 cout<<sum;
//	for(int i=0;i<argc;i++){
//		cout<<argv[i]<<endl;
//	}
}
