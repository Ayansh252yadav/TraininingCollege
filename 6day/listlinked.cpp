#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
int main(){
	node n1,n2;
	n1.data=10;
	n2.data=20;
	n1.next=&n2;
	n2.next=NULL;
	cout<<n1.data<<"->"<<n1.next->data<<"->"<<"null";
}
