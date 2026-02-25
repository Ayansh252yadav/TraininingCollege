#include<iostream>
using namespace std;
class A{
	public:
		void base1(){
			cout<<"i am base 1"<<endl;
		}
};
class B :public A{
	public:
		void base2(){
			cout<<"i am base 2"<<endl;
		}
};
class C :public B{
	public:
		void Derived(){
			cout<<" i am derived";
		}
};
int main(){
	C c;
	c.base1();
	c.base2();
	c.Derived();
}
