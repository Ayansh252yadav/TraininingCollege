#include<iostream>
using namespace std;
class A{
//	virtual :
public:
	virtual	void show(){
			cout<<"hello"<<endl;
		}
		void print(){
			cout<<"print1";
		}
		
};
class B:public A{
	public :
		void show(){
			cout<<" c++"<<endl;
		}
		void print(){
			cout<<"print2";
		}
};
int main(){
	A*a;
	B b;
	a=&b;
//		b.A::show();
//a->A::show();
   a->print();
	a->show();
}
