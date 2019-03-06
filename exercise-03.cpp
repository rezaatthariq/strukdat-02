/*
Author		: M. Reza Atthariq Kori
NPM			: 140810180060
Deskripsi	: Program menentukan gaji pegawai berdasarkan Golongan,
			  mencari rata-rata Gaji, Gaji terendah-tertinggi 
Tahun		: 2019
*/

#include <iostream>
#include <string>

using namespace std;
struct Data {
	char NIP[50];
	char nama[50];
	int gol;
	int gaji;
};

Data pegawai[20], val;
	
void inputPegawai(Data pegawai[], int &n) {
	cout << "Masukkan jumlah pegawai : ";cin >> n;
	cout << endl;
	for (int i = 0; i < n;i++) {
	cout << "Data pegawai ke-" << i + 1 << endl;
	cout << "Masukkan Nama Pegawai     : ";cin.ignore();cin.getline(pegawai[i].nama,50);
	cout << "Masukkan NIP Pegawai      : ";cin >> pegawai[i].NIP;
	cout << "Masukkan golongan Pegawai : ";cin >> pegawai[i].gol;
	cout << endl;
	}
}

void sortingGol(Data pegawai[], int &n) {
	int i;
 	Data temp;
 	for(i=1; i<n; i++){
        temp = pegawai[i];
        while(i>0 && pegawai[i-1].gol>temp.gol){
            pegawai[i]= pegawai[i-1];
            i = i-1;
        }
        pegawai[i]= temp;
    }
}

void sortingNIP(Data pegawai[], int &n) {
	int i;
	for (i=1;i<n;i++) {
		val = pegawai[i];
		while (i > 0 && pegawai[i-1].NIP>val.NIP) {
			pegawai[i] = pegawai[i-1];
			i=i-1;
		}
	pegawai[i] = val;
}

	cout << "Urutan pegawai berdasarkan NIP (Ascending)\n";
	for (int i = 0; i < n;i++) {
		cout << i + 1 << ". " << pegawai[i].nama << endl;
		}
}

void gajiTertinggi(Data pegawai[], int &n) {
	cout<<"Pegawai dengan gaji tertinggi : "<<pegawai[n-1].nama<<endl;
}

void gajiTerendah(Data pegawai[], int &n) {
	cout<<"Pegawai dengan gaji terendah  : "<<pegawai[0].nama<<endl;
}

void cariGaji(Data pegawai[], int &n) {
	for (int i = 0; i < n; i++) {
		if (pegawai[i].gol == 1) {
			pegawai[i].gaji = 2000000;
			}
		else if (pegawai[i].gol == 2) {
			pegawai[i].gaji = 3000000;
			}
		else if (pegawai[i].gol == 3) {
			pegawai[i].gaji = 5000000;
			}
		else if (pegawai[i].gol == 4) {
			pegawai[i].gaji = 8000000;
			}
		else cout<<"ERROR"<<endl;
	}
}

void rataGaji(Data pegawai[], int &n) {
	int gajiTotal= 0, rataRata;
	for (int i = 0; i < n; i++) {
		gajiTotal = gajiTotal + pegawai[i].gaji;
		}
	rataRata = gajiTotal/n;
	cout<<"\nRata-rata Gaji : "<<rataRata<<endl;
}

void cetakDaftar (Data pegawai[], int n, int rataGaji){
    cout<<"\nDaftar Pegawai"<<endl;
    for (int i=0;i<n;i++){
    	cout << "Nama   : " << pegawai[i].nama << endl;
   		cout << "NIP    : " << pegawai[i].NIP << endl;
   		cout << "Gaji   : " << pegawai[i].gaji << endl;
   		cout << endl;
  	}
}

int main() {
	int n,rataRata;
	inputPegawai(pegawai, n);
	sortingNIP(pegawai,n);
    cariGaji(pegawai,n);
	rataGaji(pegawai, n);
	sortingGol(pegawai, n);
	cetakDaftar(pegawai,n,rataRata);
	gajiTertinggi(pegawai, n);
	gajiTerendah(pegawai, n);
	}
