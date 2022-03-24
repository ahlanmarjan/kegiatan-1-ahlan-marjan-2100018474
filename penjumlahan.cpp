#include <iostream>
#include <conio.h>
using namespace std;

class hitung{
	friend ostream& operator << (ostream&, const hitung&);
	friend istream& operator >> (istream&, hitung&);
    public:
    	hitung();
    	void hitung_jumlahnya(){jumlah = (a + b + c);}
    private:
    	int a,b,c;
    	int jumlah;
};

hitung::hitung(){
	cout << "program menghitung jumlah 3 integer\n";
	cout << "selamat berkarya\n";
}

istream& operator >>(istream& in, hitung& masukan){
	cout << "masukkan nilai a :";
	in >> masukan.a;
	cout << "masukkan nilai b :";
	in >> masukan.b;
	cout << "masukkan nilai c :";
	in >> masukan.c;
	return in;
}

ostream& operator<<(ostream& out, const hitung& keluaran){
	out << "nilai a :" << keluaran.a << endl;
    out << "nilai b :" << keluaran.b << endl;
	out << "nilai c :" << keluaran.c << endl; 
	out << "jumlah 3 integer di atas :" << keluaran.jumlah << endl;
	return out;
}

main(){
	hitung x;
	cin >> x;
	x.hitung_jumlahnya();
	cout << x;
	getch();
	return 0;
}

