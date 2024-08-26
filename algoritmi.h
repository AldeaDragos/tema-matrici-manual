#pragma once
#include <iostream>
#include <string.h>
using namespace std;


void afisareMatrice(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

//Teza 1 // pag 80 // Sub 2 Ex 3

void tablouBidimensional1(int a[100][100],int n) {

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			

			a[i][j] = (i + j+2) % n; 
			// 0+0+2 % 5 = 2 , 0+1+2%5= 3 , 0+2+2 % 5 =4 ,0+2+3% 5 =0 , 0+4+2 % 5 =1

		}
	}

}

//Teza 2 // pag 83 // Sub 2 Ex 3

void tablouBidimensional2(int a[100][100], int n) {

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {

			a[i][j] = 1;

			if(i+j>=n-1){
				a[i][j] = 2;
			}
			if (i + j == n - 1) {
				a[i][j] = 3;
			}
			
		}
	}

}

//Teza 4 // pag 89 // Sub 2 Ex 3

void tablouBidimensional3(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (i == 0 || j == 0) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = (a[i][j-1] + a[i-1][j])%10;
			}

		}
	}

}

//Teza 5 // pag 92 // Sub 2 Ex 3

void tablouBidimensional4(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (i == j || i + j == 4) {
				a[i][j] = 0;
			}
			else if (i + j < 4) {

				if (i > j) {

					a[i][j] = 4;
				}
				else {
					a[i][j] = 1;
				}
			}

			else if (i > j) {
				a[i][j] = 3;
			}

			else {
				a[i][j] = 2;
			}


		}
	}
}

//Teza 7 // pag 98 // Sub 2 Ex 3

void tablouBidimensional5(int a[100][100], int n) {

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {

			if (i % 2 == 0) {
				a[i][j] = i * n + j + 1;
			}


		}

	}
}

//Teza 9 // pag 105 // Sub 2 Ex 3

void tablouBidimensional6(int a[100][100], int n) {

	for (int i = 0; i <= n; i++) {
		for (int j = n; j >= 0; j--) {

		

			if (i%2==0) {
				a[i][j] = a[i][j] + n - i - 1;
			}
			else {
				a[i][j] = a[i][i] - j - 1;
			}

			a[i][i] = 6;

			
		}
	}

}

//Teza 10 // pag 109 // Sub 2 Ex 3

void tablouBidimensional7(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= 2; j++) {

			if (i <= 2) {
				a[i][j] = (i+j) % 6;
				a[i][n - j - 1] = (i + j) % 6;
			}
			else{
				a[i][j] = a[n-i-1][j];
				a[i][n - j - 1] = a[n - i - 1][j];
			}


		}
	}

}

//Teza 12 // pag 114 // Sub 2 Ex 3

void tablouBidimensional8(int a[100][100], int n) {
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			a[i][j] = (i + j) + 2;

		}
	}

}

//Teza 13 // pag 117 // Sub 2 Ex 3
 

void tablouBidimensional9(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (i == 4 || j == 0) {
				a[i][j] = 5;
			}

			else if (i == j || i + j == 4) {
				a[i][j] = 2;

			}

			else if (i < j && i + j < 4) {
				a[i][j] = 1;
			}

			else if (i > j && i + j == 4) {
				a[i][j] = 1;

			}
			else {
				a[i][j] = 0;
			}
		}
	}
}


//Teza 15 // pag 123 // Sub 2 Ex 3

void tablouBidimensional10(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
				a[i][j] = 1;
			}
			else if (i == 1 || i == n - 2 || j == 1 || j == n - 2) {
				a[i][j] = 2;
			}
			else {
				a[i][j] = 3;
			}
		}
	}
}

//Teza 18 // pag 132 // Sub 2 Ex 3

void tablouBidimensional11(int a[100][100], int n) {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {

			if (i == 0) {
				a[i][j] = 2;
			}
			else {
				if (j == 0) {
					a[i][j] = 2;
				}
				else {
					a[i][j] = a[i][j - 1] + a[i - 1][j];
				}
			}
		}
	}
}

//Teza 20 // pag 138 // Sub 2 Ex 3

void tablouBidimensional12(int a[100][100], int n) {

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {

			if (i == j) {
				a[i][j] = 1;
			}

			else {
				if (i + j == 3) {
					a[i][j] = 7;
				}
				else {
					a[i][j] = j + 1;
				}
			}
		}

	}
}