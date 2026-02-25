#include<iostream>
using namespace std;
class A{
	public :
		virtual ~A()=0;
};
A::~A(){
	cout<<"pure virtul destructor of base class a";
}
class B:public A{
	public :
		~B(){
			cout<<"derived class destructor"<<endl;
		}
};
int main(){
	A *a=new B();
	delete a;
}
