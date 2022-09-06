#include "completare-variante.h"

// TOTAL : 4

// Problema Propusa : 1
// 
// Elementele de pe linia si coloana 1 au valoare lui x.
// Oricare 2 elemente au valoarea celor 2 elemente alaturate insumate.
//
// Exemplu :
// 1 1 1 1
// 1 2 3 4
// 1 3 6 10
// 1 4 10 20

void problemaPropusa1() {

	int n, x;
	cout << "Introduceti n : ";
	cin >> n;
	cout << "Introduceti x : ";
	cin >> x;

	int y[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || j == 0) {
				y[i][j] = x;
			}
			else {
				y[i][j] = y[i][j - 1] + y[i - 1][j];
			}
		}
	}

	afisareMatrice(y, n, n);
}

// Problema Propusa : 4
//
// Elementele matricei sunt numere de la 0 - 10.
// Fiecare linie este egala cu permutarea ciruclara spre stanga
// a liniei anterioara cu o pozitie.
// 
// Exemplu :
//
// 1 2 3 4
// 2 3 4 1
// 3 4 1 2
// 4 1 2 3

void problemaPropusa4() {
	
	int n;
	cout << "Introduceti n : ";
	cin >> n;

	int x[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0, k = i; j < n; j++, k++) {
			if (i == 0) {
				x[i][j] = j + 1;
			}
			else {
				x[i][j] = x[0][k];
				if (k == n - 1) {
					k = -1;
				}
			}
		}
	}

	afisareMatrice(x, n, n);
}

// Problema Propusa : 8
// 
// Afisarea "serpuita" a elementelor de la 1 la n^2.
// 
// Exemplu :
// 
// n = 4
// 
// 1 2 3 4
// 8 7 6 5
// 9 10 11 12
// 16 15 14 13

void problemaPropusa8() {

	int n;
	cout << "Introduceti n : ";
	cin >> n;

	int y[100][100];

	for (int i = 0, x = 1; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++, x++) {
				y[i][j] = x;
			}
		}
		else {
			for (int k = 0, j = n - 1 - k; j > -1; j--, k++, x++) {
				y[i][j] = x;
			}
		}
	}

	afisareMatrice(y, n, n);
}

// Problema Propusa : 9
// 
// Afisarea in spirala a elementelor de la 1 la n^2.
// 
// Exemplu :
//
// n = 4
//
// 1 2 3 4
// 12 13 14 5
// 11 16 15 6
// 10 9 8 7

void problemaPropusa9() {

	int n;
	cout << "Introduceti n : ";
	cin >> n;

	int y[100][100];

	for (int x = 1, c = 1, vsi = 0, vji = 0, vsj = 0, vdj = 0; x <= pow(n, 2); c++) {
		if (c == 5) {
			c = 1;
		}
		if (c == 1) {
			for (int j = vsj; j < n - vdj; j++, x++) {
				y[vsi][j] = x;
			}
			vsi++;
		}
		if (c == 2) {
			for(int i = vsi; i < n - vji; i++, x++) {
				y[i][n - vdj - 1] = x;
			}
			vdj++;
		}
		if (c == 3) {
			for (int j = n - vdj - 1; j > vsj - 1; j--, x++) {
				y[n - vji - 1][j] = x;
			}
			vji++;
		}
		if (c == 4) {
			for (int i = n - vji - 1; i > vsi - 1; i--, x++) {
				y[i][vsj] = x;
			}
			vsj++;
		}
	}

	afisareMatrice(y, n, n);
}
