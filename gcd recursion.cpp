#include<iostream>
#include<conio.h>
using namespace std;
int gcd(int a,int b){
	if(a==0||b==0){
		return 0;
	}
	if(a==b){
		return a;
	}
	if(a>b){
		return gcd(a-b,b);
	}
	else{
		return gcd(b-a,a);
	}
}

int main(){
	int a = 98, b = 56;
	cout<<"GCD of the two Numbers is "<<gcd(a,b);
}
