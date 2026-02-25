#include<iostream>
usingnamespace std;
class A{
	int x=10;
	friend class B;
};
class B{
	public:
		void show(){
			A a;
			cout<<a.x;
		}
};
int main(){
	B b;
	b.show();
}
