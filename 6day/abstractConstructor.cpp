#include<iostream>
using namespace std;
class A{
	public:
		int a;
		virtual void show()=0;
		A(int x){
			a=x;
			cout<<"abstract class constructor"<<endl;
		}
};
class B:public A{
 public:
 	int y;
 	B(int i,int j):A(i){
 		y=j;
	 }
	 void show(){
	 	cout<<a<<" "<<y<<endl;
	 }
};
int main(){
	A *a=new B(12,34);
	a->show();
}
