/*
Author		: M. Reza Atthariq Kori
NPM			: 140810180060
Deskripsi	: Menginput dan meng-output isi struct
Tahun		: 2019
*/

#include<iostream>
using namespace std;

struct Theater{
	int room;
	char seat[3];
	char movieTitle[30];
};

int main(){
	Theater thtr;
	cout<<"Room        : ";cin>>thtr.room;
	cout<<"Seat        : ";cin>>thtr.seat;
	cout<<"Movie Title : ";cin.ignore();cin.getline(thtr.movieTitle,30);
	cout<<"\n";
	cout<<"Room        : "<<thtr.room<<endl;
	cout<<"Seat        : "<<thtr.seat<<endl;
	cout<<"Movie Title : "<<thtr.movieTitle;
}
