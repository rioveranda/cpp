#include <iostream>

using namespace std;

int main() {
	int nilai;
	char nama[50], jurusan[30], nim[10];
	
	cout<<"=====Biodata Mahasiswa STT DUTA BANGSA=====\n";
	cout<<"Masukan Nama Mahasiswa : ";
	cin.getline(nama,50);
	cout<<"Masukkan Nim : ";
	cin.getline(nim,10);
	cout<<"Masukan Jurusan : ";
	cin.getline(jurusan,30);
	cout<<"Masukan Nilai : ";
	cin>>nilai;
	cout<<"\n\n\n";
	cout<<"Tampilan Biodata Mahasiswa \n";
	cout<<"Nama Mahasiswa : "<<nama;
	cout<<"\nNim : "<<nim;
	cout<<"\nJurusan : "<<jurusan;
	cout<<"\n";
	
	if (nilai>80)
	{
		cout << "ANDA LULUS DENGAN NILAI A";
	
	}
	return 0;
}
