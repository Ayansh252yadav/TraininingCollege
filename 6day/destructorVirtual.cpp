#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<" I am constructor of base1 class"<<endl;
		}
		virtual ~A(){
			cout<<" I am destructor of base1 class"<<endl;
		}
};
class B:public A{
	public:
		B(){
			cout<<" I am constructor of derived2 class"<<endl;
		}
		 ~B(){
			cout<<" I am destructor of derived2 class"<<endl;
		}
};
int main(){
	B *b=new B();
	A *a=b;
//	delete(a);
   
}

