#include<iostream>
#include<conio.h>
using namespace std;
int fibonacci(int n){
	if((n==1)||(n==0)){
		return n;
	}
	else{
		return (fibonacci(n-1)+fibonacci(n-2));
	}
}

int main(){
	int n, i = 0;
	cout<<"Enter the number of the terms";
	cin>>n;
	while(i<n){
		cout<<fibonacci(i);
		i++;
	}
}
