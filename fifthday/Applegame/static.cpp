#include<iostream>
using namespace std;
class A{
	public:
	static string b;
	int a;
	
	void print(){
		
		a++;
		
		cout<<a<<" "<<b<<endl;
	}
	void print2(){
		
		cout<<a<<" "<<b<<endl;
	}
};
string A::b="kit";
int main(){
	A a;
	a.a=9;
	a.print();
	
	a.print2();
}
