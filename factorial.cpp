#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int n){
	if(n<=0){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}

int main(){
	int val,result;
	cout<<"enter the value to calculate the factorial";
	cin>>val;
	result = factorial(val);
	cout<<result;
}
