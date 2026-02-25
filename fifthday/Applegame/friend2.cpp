#include<iostream>
using namespace std;
class A;

class B{
	public:
	 void show();
		void hello(){
			cout<<"hello";
		}
		
};
class A{
	int x=10;
//	friend class B;
//	friend void dis();
	friend void B::show();
};
 void B::show(){
//			A:: a;
A a;
			cout<<a.x<<endl;
		}
//void dis(){
//	A a;
//	cout<<a.x;
//}
int main(){
	B b;
	b.show();
//	dis();
}
