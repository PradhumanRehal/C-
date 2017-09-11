#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int a = 98;
	int b = 56;
	int temp;
	
	while(b!=0){
		temp = b;
		b=a%b;
		a=temp;
	}
	
	int gcd = a;
	cout<<a;
}
