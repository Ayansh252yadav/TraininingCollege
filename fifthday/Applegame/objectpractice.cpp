#include<iostream>
using namespace std;
class A{
	private:
	int age;
	string name;
	public:
	void input(){
		cout<<"enter your age ";
		cin>>age;
		cout<<"enter your name ";
		cin>>name;
	}
	void print(){
		cout<<"your name is "<<name<<" your age is "<<age;
	}
};
class B{
	private:
	int age;
	string name;
	public:
		void hello();
};
void B:: hello(){
	cout<<"hello Ayansh";
}
int main(){
//	cout<<sizeof(A);
//	A a;
//	a.input();
//	a.print();
	B b;
	b.hello();
}
