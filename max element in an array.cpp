#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int array[10],max;
	cout<<"Enter the elements ";
	for(int i=0; i<10; i++){
		cin>>array[i];
	}
	max = array[0];
	for(int j=0; j<10; j++){
		if(array[j]>max){
			max = array[j];
		}
	}
	cout<<" max element in the array is "<<max;
}
