#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

/* Created by Rizky Khapidsyah */

int main() {
	char kata[20];
	float angka, a;
	
	cout << "Masukan Sembarang Kata berupa angka = ";
	gets_s(kata);
	angka = atol(kata);
	a = angka + 2500;
	cout << "Hasil Perubahan ditambah dengan 2500 = " << a;

	_getch();
	return 0;
}