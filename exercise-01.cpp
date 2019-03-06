/*
Author		: M. Reza Atthariq Kori
NPM			: 140810180060
Deskripsi	: Menginput dan meng-output isi struct
Tahun		: 2019
*/

#include<iostream>
using namespace std;

struct Orang {
	int umur;
	char nama[30];
	char goldar;
	char jk;
};

int main(){
	Orang org;
	
	cout<<"Umur   : ";cin>>org.umur;
	cout<<"Nama   : ";cin>>org.nama;
	cout<<"JK     : ";cin>>org.jk;
	cout<<"Goldar : ";cin>>org.goldar;
	cout<<"\n";
	cout<<"Umur   : "<<org.umur<<endl;
	cout<<"Nama   : "<<org.nama<<endl;
	cout<<"JK     : "<<org.jk<<endl;
	cout<<"Goldar : "<<org.goldar<<endl;
	
}



