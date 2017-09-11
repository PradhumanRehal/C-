#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int array[10],i,j,num1,num2;
	cout<<"Enter the items";
	for(i=0; i<10; i++){
		cin>>array[i];
	}
	num1 = array[0];
	for(j=0; j<10; j++){
		if(array[j]>num1){
			num1 = array[j];
		}
	}
	cout<<num1;
	getch();
}
