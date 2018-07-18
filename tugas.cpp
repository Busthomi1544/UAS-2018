#include <iostream>
#include <conio.h>
#include<string>

using namespace std;

class buku{ //buku sebagai sebuah class
	public:
		//atribut-atribut yang ada
		string judul;
		string pengarang;
		int cetakan;
		int tahun;
};

int main(){
	int tc;
	
	buku novel; //novel sebagai sebuah object
	
	cout<<"Testcase: ";
	cin>>tc;
	
	for(int i=0; i<tc; i++){
		cin.ignore(); //untuk mengabaikan entek
		cout<<"Judul: ";getline(cin,novel.judul);
		cout<<"Pengarang: ";getline(cin,novel.pengarang);
		//getline digunakan untuk membaca inputan dalam 1 baris
		cout<<"Cetakan ke: ";cin>>novel.cetakan;
		cout<<"Tahun: ";cin>>novel.tahun;
		
		//menampilkan hasil
		cout<<novel.judul<<endl;
		cout<<novel.pengarang<<endl;
		cout<<novel.cetakan<<endl;
		cout<<novel.tahun<<endl<<endl;
	}
	getch();
}
