#include<iostream>
using namespace std;
int add(int a,int b){
	return a+b;
}
int addAdd(int *a,int *b){
	return *a+*b;
}
int addref(int &a,int &b){
	return a+b;
}
int main(){
int a=10;
int b=20;
cout<<"call by value "<<add(a,b)<<endl;
cout<<"call by address"<<addAdd(&a,&b)<<endl;
cout<<"call by reference"<<addref(a,b);
}
