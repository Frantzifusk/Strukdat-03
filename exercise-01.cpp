/*
Nama Program : Pointer Math
Nama         : Fauzan Naufal Taufiqulhakim
NPM          : 140810180044
Tanggal Buat : 13-03-2019
Deskripsi    : Menghitung Persegi
*************************************************/
#include<iostream>
#include<math.h>
using namespace std;

typedef struct {
	float panjang;
	float lebar;
} segiempat;

void input(segiempat *s) {
	cout << "Panjang : "; cin >> s->panjang;
	cout << "Lebar	 : "; cin >> s->lebar;
}
float luas(segiempat s) {
	float luas;
	luas = s.panjang * s.lebar;
	return luas;
}
float keliling(segiempat s) {
	float keliling;
	keliling = (2 * s.panjang)+(2 * s.lebar);
	return keliling;
}
// panjang diagonal segiempat
float diagonal(segiempat s) {
	float d;
	d = sqrt((s.panjang*s.panjang) + (s.lebar*s.lebar));
	return d;
}
void print(segiempat s) {
	cout << "Panjang	: " << s.panjang << endl;
	cout << "Lebar		: " << s.lebar << endl;
	cout << "Diagonal	: " << diagonal(s) << endl;
	cout << "Luas		: " << luas(s) << endl;
	cout << "Keliling	: " << keliling(s) << endl;
}

int main() {
	segiempat* sg;
	sg = new segiempat;
	input(sg);
	print(*sg);

		return 0;
}

