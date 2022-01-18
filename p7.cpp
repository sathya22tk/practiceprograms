//print the value stored in the variable using pointer
#include<iostream>
using namespace std;

int dis(int *p){
	cout<<*p<<endl;
	return 0;
}
int main(){
	int a;
	cout<<"enter the integer: ";
	cin >> a;
	dis(&a);
}