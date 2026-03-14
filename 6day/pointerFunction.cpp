#include<iostream>
using namespace std;
float add(int,int);
int cube(int);
int main(){
	float (*p)(int,int);
	p=&add;
	p(5,4);
	cout<<endl;
	int (*p1)(int);
	p1=&cube;
	p1(3);
}

float add(int a,int b){
	cout<<a+b;
}

int cube(int a){
	cout<<a*a*a;
}
