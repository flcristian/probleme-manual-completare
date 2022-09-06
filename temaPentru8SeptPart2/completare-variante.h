#include "functii.h"

// *EXERCITIILE DE LA EXERCITIUL 3, SUBIECTUL 2*

// TOTAL : 7

// Varianta 3
//
// 2 1 1 1 1
// 1 2 1 1 1
// 1 1 2 1 1
// 1 1 1 2 1
// 1 1 1 1 2
// 
// Completam :
// 
// for(int i = 1; i <= 5; i++)
//    for(int j = 1; j <= 5; j++)

void varianta3() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {

		// COMPLETARE

			if (i == j) {
				cout << "2 ";
			}
			else {
				cout << "1 ";
			}
		}
		cout << endl;
	}
}

// Varianta 4
//
// * - - - - - *
// * * - - - * *
// * - * - * - *
// * - - * - - *
// * - - - - - *
// * - - - - - *
// * - - - - - *
//
// Completam :
//
// for(int i = 0; i <= 6; i++)
//    for(int j = 0; j <= 6; j++)

void varianta4() {
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {

		// COMPLETARE

			if (j == 0 || j == 6 || (j == i && i < 4) || (j == 6 - i && i < 4)) {
				cout << "* ";
			}
			else {
				cout << "- ";
			}
		}
		cout << endl;
	}
}

// Varianta 5
//
// 1 1 1 1 1 1
// 1 2 2 2 2 1
// 1 2 3 3 2 1
// 1 2 3 3 2 1
// 1 2 2 2 2 1
// 1 1 1 1 1 1
//
// Completam :
//
// for(int i = 1; i <= 6; i++)
//    for(int j = 1; i <= 6; i++)

void varianta5() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {

		// COMPLETARE

			if (i == 0 || i == 5 || j == 0 || j == 5) {
				cout << "1 ";
			}
			else {
				if (i == 1 || i == 4 || j == 1 || j == 4) {
					cout << "2 ";
				}
				else {
					cout << "3 ";
				}
			}
		}
		cout << endl;
	}
}

// Varianta 6
//
// 2 3 1 2 3 1
// 3 6 2 3 6 2
// 1 2 0 1 2 0
// 2 3 1 2 3 1
// 3 6 2 3 6 2
// 1 2 0 1 2 0
//
// Completam :
//
// for(int i = 1; i <= 6; i++)
//    for(int j = 1; j <= 6; j++)

void varianta6() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {

		// COMPLETARE

			if (i == 0 || i == 3) {
				if (j == 0 || j == 3) {
					cout << "2 ";
				}
				else {
					if (j == 1 || j == 4) {
						cout << "3 ";
					}
					else {
						cout << "1 ";
					}
				}
			}
			else {
				if (i == 1 || i == 4) {
					if (j == 0 || j == 3) {
						cout << "3 ";
					}
					else {
						if (j == 1 || j == 4) {
							cout << "6 ";
						}
						else {
							cout << "2 ";
						}
					}
				}
				else {
					if (j == 0 || j == 3) {
						cout << "1 ";
					}
					else {
						if (j == 1 || j == 4) {
							cout << "2 ";
						}
						else {
							cout << "0 ";
						}
					}
				}
			}
		}
		cout << endl;
	}
}

// Varianta 7
// 
// A B C D E F
// B A B B F B
// C C A F C C
// D D A F D D
// E A E E A E
// F F F F F A
//
// Completam :
//
// for(int i = 0; i < 6; i++) {
//    for(int j = 0; j < 6; j++) {
//        . . . . . . }
//    cout << endl; }

void varianta7() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (j == i) {
				cout << "A ";
			}
			else {
				if (j == 5 - i) {
					cout << "F ";
				}
				else {
					if (i == 1 || (j == 1 && i == 0)) {
						cout << "B ";
					}
					else {
						if (i == 2 || (j == 2 && i == 0)) {
							cout << "C ";
						}
						else {
							if (i == 3 || (j == 3 && i == 0)) {
								cout << "D ";
							}
							else {
								if (i == 4 || (j == 4 && i == 0)) {
									cout << "E ";
								}
								else {
									cout << "F ";
								}
							}
						}
					}
				}
			}
		}
		cout << endl;
	}
}

// Varianta 8
//
// 6 7 8 9 10
// 7 8 9 10 11
// 8 9 10 11 12
// 9 10 11 12 13
// 10 11 12 13 14
// 
// Completam :
//
// for(int i = 0; i < 5; i++) {
//    for(int j = 0; j < 5; j++) {
//       . . . . . . . . . . }
//    cout << endl; }

void varianta8() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << 6 + i + j << " ";
		}
		cout << endl;
	}
}

// Varianta 9
//
// 0 1 2 3 4
// 2 3 4 5 6
// 0 1 2 3 4
// 6 7 8 9 10
// 0 1 2 3 4
//
// Completam :
// 
// for(int i = 0; i < 5; i++) {
//    for(int j = 0; j < 5; j++) {
//       . . . . . . . . . . }
//    cout << endl; }

void varianta9() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i % 2 == 1) {
				cout << 2 * i + j << " ";
			}
			else {
				cout << j << " ";
			}
		}
		cout << endl;
	}
}