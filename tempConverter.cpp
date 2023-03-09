/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

	float KONVERSIFAR (float C){
		float FAR;
		
		
		FAR = (C*9/5) + 32;
		cout<<endl<<"Nilai Farenheit dari "<<C<<"°C adalah "<< FAR <<" °F";
		
		return FAR;
		
	}
	
		float KONVERSIKEL (float C){
		float KEL;
		
		
		KEL = C + 273.15;
		cout<<endl<<"Nilai Farenheit dari "<< C <<"°C adalah "<< KEL <<"K";
		
		return KEL;
		
	}
	
	int main()
	{
		
		float C;
		int pilihan;
		
		cout << "+++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << "Selamat datang di program konversi suhu Celcius" << endl;
		cout << "+++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl << "Silahkan Masukkan nilai Celcius" << endl << "--> ";
		cin  >> C;
		
		cout << "Pilih konversi nilai ke : "<<endl;
		cout << "1.Farenheit" << endl << "2.Kelvin" << endl << "3.Exit"<<endl<<endl;
		cout << "--> ";
		cin >> pilihan;
		
		switch(pilihan){
			
			case 1 : KONVERSIFAR(C);
			break;
			case 2 : KONVERSIKEL(C);
			break;
	}
	return 0;
}
