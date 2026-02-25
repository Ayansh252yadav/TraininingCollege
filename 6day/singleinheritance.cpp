#include<iostream>
using namespace std;
 class A{
	public :
		void show(){
			cout<<"hello";
		}
};

 class B:public A{
	
	public :
		void put(){
			cout<<" world";
		}
};
int main(){
	B b;
	b.show();
	b.put();
}
