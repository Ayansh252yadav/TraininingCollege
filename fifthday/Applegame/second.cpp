#include<iostream>
using namespace std;
class A;
class B{
	public:
		void show();
		void put();
		
};
class A{
	int x=10;
	friend void B::show();
};
void B::show(){
	A a;
	cout<<a.x<<endl;
}
void B::put(){
	cout<<"hello";
}
int main(){
	B b;
	b.show();
	b.put();
}
