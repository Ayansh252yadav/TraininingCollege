#include<iostream>
using namespace std;
struct student{
	string name;
	int age;
} ;
void show(struct student s ){
	cout<<s.name<<" "<<s.age<<endl;
}
int main(){
//	s1.name[0]="Ayansh yadav";
//	s1.age=22;
//	cout<<s1.name<<endl;
//	cout<<s1.age;
   struct student s1[5];
	for(int i=0;i<5;i++){
		cin>>s1[i].name;
		cin>>s1[i].age;
	}
	cout<<"==============Records===================="<<endl;
//	cout<<endl;
//		for(int i=0;i<5;i++){
////		cout<<s1[i].name<<" "<<s1[i].age<<endl;
//         show(s1[i]);
//	
//	}
	struct student *ptr=s1;
	cout<<endl;
		for(int i=0;i<5;i++){
		cout<<(ptr+i)->name<<" "<<(ptr+i)->age<<endl;
//         show(ptr->s1[i]);
	
	}
}
