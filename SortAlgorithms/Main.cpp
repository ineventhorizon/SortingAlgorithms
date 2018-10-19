#include<iostream>
#include<time.h>
#include"SortingAlgorithms.h"
#include<iomanip>
#define Size_A 1000
#define Size_B 10000
#define Size_C 100000
using namespace std;


void main() {

	int A[Size_A];
	int B[Size_B];
	int C[Size_C];
	double duration;
	SortingAlgorithms sort;

	for (int i = 0; i < Size_C; i++) {
		if (i < Size_A) A[i] = getRandomInteger(1, Size_A);
		if (i < Size_B) B[i] = getRandomInteger(1, Size_B);
		if (i < Size_C) C[i] = getRandomInteger(1, Size_C);
	}


	cout << setw(30) << " N=1000" << setw(30) << " N=10000" << setw(30) << " N=100000" << endl;
	cout << endl;

	cout << setw(5) << "Bubble Sort";
	cout << setw(18) << sort.bubbleSort(A, Size_A);
	cout << setw(30) << sort.bubbleSort(B, Size_B);
	cout << setw(30) << sort.bubbleSort(C, Size_C) << endl;

	cout << setw(5) << "Selection Sort";
	cout << setw(15) << sort.selectionSort(A, Size_A);
	cout << setw(30) << sort.selectionSort(B, Size_B);
	cout << setw(30) << sort.selectionSort(C, Size_C) << endl;

	cout << setw(5) << "Insertion Sort";
	cout << setw(15) << sort.insertionSort(A, Size_A);
	cout << setw(30) << sort.insertionSort(B, Size_B);
	cout << setw(30) << sort.insertionSort(C, Size_C) << endl;

	cout << setw(5) << "Quick Sort";
	cout << setw(18) << sort.quickSort(A, Size_A);
	cout << setw(31) << sort.quickSort(B, Size_B);
	cout << setw(30) << sort.quickSort(C, Size_C) << endl;

	cout << setw(5) << "Shell Sort";
	cout << setw(18) << sort.shellSort(A, Size_A);
	cout << setw(31) << sort.shellSort(B, Size_B);
	cout << setw(30) << sort.shellSort(C, Size_C) << endl;

	system("pause");
}