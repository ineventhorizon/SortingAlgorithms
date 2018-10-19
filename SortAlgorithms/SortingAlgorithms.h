#pragma once
#include <time.h>
#include<iostream>
using namespace std;
int getRandomInteger(int lowerBound, int upperBound);
class SortingAlgorithms
{
	int partition(int *A, int l, int u);
	void Quick_Sort(int *A, int l, int u);

public:
	SortingAlgorithms();

	double bubbleSort(int *A, int N);
	double selectionSort(int *A, int N);
	double insertionSort(int *A, int N);
	double quickSort(int *A, int N);
	double shellSort(int *A, int N);


	~SortingAlgorithms();
};



