//x^n

#include<iostream>
using namespace std;
int power(int ,int );//call by value
int power(int x,int n){
   int pow=1;
   for(int i=0;i<n;i++){
   	   pow*=x;
   }
   return pow;
}

int power1(int *,int *);//call by address

int power1(int *x,int *n){
   int pow=1;
   for(int i=0;i<*n;i++){
   	   pow*=(*x);
   }
   return pow;
}

int power2(int &,int &);//call by refernce
int power2(int &x,int &n){
   int pow=1;
   for(int i=0;i<n;i++){
   	   pow*=(x);
   }
   return pow;
}

int main(){
	int x;
	int n;
	cin>>x>>n;
	cout<<"call by value :"<<power(x,n)<<endl;
	cout<<"call by address :"<<power1(&x,&n)<<endl;
	cout<<"call by reference :"<<power2(x,n);
}
