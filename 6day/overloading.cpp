#include<iostream>
using namespace std;
class A{
	public:
		int add(int x,int y){
			return x+y;
		}
		double add(float x,double y){
			return x+y;
		}
		int add(int x,int y,int z){
			return x+y+z;
		}
		double add(int x,int y,double z){
			return x+y+z;
		}
		
};
int main(){
	A a;
cout<<a.add(2,6)<<endl;
cout<<a.add((float)2,3.033)<<endl;
cout<<a.add(2,3,4);
cout<<a.add(2,3,4.5);
return 0;
}
