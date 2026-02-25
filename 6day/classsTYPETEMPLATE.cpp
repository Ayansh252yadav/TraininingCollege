#include<iostream>
using namespace std;
template <class T,class U>
class A{
	T x;
	U y;
	public :
		A(){
			cout<<"constructor of A is called"<<endl;
		}
		A(T i,U j){
			x=i;
			y=j;
		}
		void show();
};
template<class T,class U>void A<T,U>::show(){
	cout<<x+y;
}
int main(){
	A<int,float>obj(2,2.5);
	obj.show();
}
