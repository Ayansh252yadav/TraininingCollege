#include<iostream>
using namespace std;
class A{
	int roll;
	string name;
	int *ptr;
	public:
		A(int roll,string name,int x){
			ptr=new int(x);
			this->roll=roll;
			this->name=name;
		}
		A(A &a){
			this->roll=a.roll;
			this->name=a.name;
		}
	
	   void show(){
	   	cout<<name<<" "<<roll<<" "<<*ptr<<endl;
	   }
	   
	   	~A(){
	   	    delete(ptr);
			cout<<"i am des"<<endl;
		}
		
};

int main(){
	A a(58,"Ayansh",10);
//	A b(a);
//	b.show();
a.show();
}
