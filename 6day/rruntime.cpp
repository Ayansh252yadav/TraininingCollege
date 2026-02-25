#include<iostream>
using namespace std;
class A{
	public:
	virtual	void show(){
			cout<<"i am base class"<<endl;
		}
};
class B : public A{
	
	public:
		void show(){
			cout<<"I am derived"<<endl;
		}
};
int main(){
	A *a;
	B b;
	a=&b;
	a->show();
	a->A::show();
}
