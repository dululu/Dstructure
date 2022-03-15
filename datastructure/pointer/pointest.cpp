#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int sum = 10;
	int *pointer;
	pointer = &sum;

	cout <<sum<<endl;
	cout <<*pointer<<endl;
}