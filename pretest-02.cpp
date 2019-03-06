/*
Author		: M. Reza Atthariq Kori
NPM			: 140810180060
Deskripsi	: Program memindahkan angka 0 ke depan
Tahun		: 2019
*/

#include<iostream>
using namespace std;

void moveZeroToFront( int arr[], int n){
	for(int i=0;i<n;i++){
		if (arr[i]=='0'){
			arr[i]=arr[0];
	}
	}
}
void input(int (&arr)[100], int& n){
	cout<<"Masukkan panjang : ";cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}
void output (int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}

int main(){
	int arr[100];
	int n;
	input(arr,n);
	moveZeroToFront(arr,n);
	output(arr,n);
}
