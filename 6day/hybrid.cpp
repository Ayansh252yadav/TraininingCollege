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
			cout<<"i am base 2 of base 1"<<endl;
		}
};
class C :public A{
	public:
		void Derived(){
			cout<<" i am base 3 of 1";
		}
};
class D:public B,public C{
	public :
		void hybrid(){
			cout<<" hybrid";
		}
};
int main(){
	D d;
	d.B::base1();
	d.base2();
	d.Derived();
	d.hybrid();
}
