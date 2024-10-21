// Question_1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

void transpose(int matrix[3][3], int newMatrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			newMatrix[i][j] = matrix[j][i];
		}
	}
}

void diagonal(int matrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		cout << matrix[i][i] << " ";
	}
}

void matrixAddition(int matrix[3][3], int otherMatrix[3][3], int newMatrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			newMatrix[i][j] = matrix[i][j] + otherMatrix[i][j];
		}
	}
}

int determinant(int matrix[3][3]) {
	int a = matrix[0][0] * matrix[1][1] * matrix[2][2];
	int b = matrix[1][0] * matrix[2][1] * matrix[0][2];
	int c = matrix[2][0] * matrix[0][1] * matrix[1][2];
	int d = matrix[0][2] * matrix[1][1] * matrix[2][0];
	int e = matrix[1][2] * matrix[2][1] * matrix[0][0];
	int f = matrix[2][2] * matrix[0][1] * matrix[1][0];
	return a + b + c - d - e - f;
}

void printer(int matrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int MatrixA[3][3] = {
		{3, 5, 7},
		{7, 8, 6},
		{4, 8, 6}
	};

	int MatrixB[3][3] = {
		{2, 5, 2},
		{7, 4, 4},
		{6, 4, 5}
	};

	int newMatrixA[3][3];
	int newMatrixB[3][3];
	int finalMatrix[3][3];

	transpose(MatrixA, newMatrixA);
	transpose(MatrixB, newMatrixB);
	cout << "Matrix A:" << endl;
	printer(newMatrixA);
	cout << endl;
	cout << "Matrix B:" << endl;
	printer(newMatrixB);
	cout << endl;

	cout << "MatrixA + MatrixB:" << endl;
	matrixAddition(newMatrixA, newMatrixB, finalMatrix);
	printer(finalMatrix);
	cout << endl;

	cout << "Diagonal of MatrixA:" << endl;
	diagonal(MatrixA);

	cout << "\n\nDeterminant A: " << determinant(MatrixA);
	cout << "\nDeterminant B: " << determinant(MatrixB);
	cout << "\nDet(A) + Det(B): " << determinant(MatrixA) + determinant(MatrixB);
}