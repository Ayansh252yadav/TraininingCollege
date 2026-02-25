#include<iostream>
using namespace std;
template <typename T>
class A{
	T *ptr;
	int size;
	public:
		A(T arr[],int s);
		void print();
};
template<typename T>A<T>::A(T arr[],int s){
	ptr=new T[s];
	size =s;
	for(int i=0;i<size;i++){
		ptr[i]=arr[i];
	}
}
template<typename T>void A<T>::print(){
	for(int i=0;i<size;i++){
		cout<<*(ptr+i)<<" ";
	}
}
int main(){
	int arr[]={1,2,3,4,5};
	float arr2[]={1.2,2.3,3.4,5.5};
	char arr3[]={'A','B','C','D'};
	A<int>obj1(arr,5);
	A<float>obj2(arr2,4);
	A<char>obj3(arr3,4);
	obj1.print();
	cout<<endl;
	obj2.print();
	cout<<endl;
	obj3.print();
}
