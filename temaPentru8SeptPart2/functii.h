#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void afisareMatrice(int x[100][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}