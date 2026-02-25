#include<iostream>
using namespace std;
template<typename T,typename A>
A show(A x,T y,T z){
	return (x+y+z);
}

T show1(T x,T y){
	return ((x>y)?x:y);
}
int main(){
//	cout<<show<float>(2.5,3.5,4);
//cout<<show<float>(2,3.5,4)<<endl;
cout<<show1<char>('a','b');
	return 0;
}
