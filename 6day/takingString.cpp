#include<iostream>
using namespace std;
int main(){
	string s;
	int age;
	int roll;
	
	cout<<"enter roll no :";
	cin>>roll;
	cin.ignore();
	cout<<"Enter name :";
//	cin>>s;
getline(cin,s);
	cout<<"enter age :";
	cin>>age;
	
	cout<<"name="<<s<<endl;
	cout<<"age="<<age<<endl;
	cout<<"roll no="<<roll;
}
