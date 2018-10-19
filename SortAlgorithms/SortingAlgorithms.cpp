#include "SortingAlgorithms.h"


/*
* Constructor of the sorting algorithms.
* Sets the time to null for getting random numbers.
*/
SortingAlgorithms::SortingAlgorithms()
{
	srand(time(NULL));
}
/*
* Destructor function.
* Destructs nothing for this class.
*/
SortingAlgorithms::~SortingAlgorithms()
{
}
/*
* Random integer generator.
*/
int getRandomInteger(int lowerBound, int upperBound) {
	return (lowerBound + rand() % (upperBound - lowerBound + 1));
}
/*
* Bubble Sort
* Checks the two elements with each other if left one is bigger then swaps the elements.
* O(n) nearly sorted.
* O(n^2)
*/
double SortingAlgorithms::bubbleSort(int *A, int N) {
	clock_t timeStart, timeEnd;
	int temp;

	int *arr = new int[N];
	for (int i = 0; i < N; i++) arr[i] = A[i];

	timeStart = clock();
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	timeEnd = clock();

	delete[] arr;
	return  (double)(timeEnd - timeStart) / CLOCKS_PER_SEC;
}
/*
* Selection Sort
* Finds the minumum elements index and places the element to the beginning of the array.
* Always n^2
* O(n^2)
*/
double SortingAlgorithms::selectionSort(int *A, int N) {
	clock_t timeStart, timeEnd;
	int min_index, temp;

	int *arr = new int[N];
	for (int i = 0; i < N; i++) arr[i] = A[i];

	timeStart = clock();
	for (int i = 0; i < N - 1; i++) {
		min_index = i;
		for (int j = i + 1; j < N; j++) {
			if (arr[j] < arr[min_index]) min_index = j;
		}

		temp = arr[min_index];
		arr[min_index] = arr[i];
		arr[i] = temp;
	}
	timeEnd = clock();

	delete[] arr;
	return  (double)(timeEnd - timeStart) / CLOCKS_PER_SEC;
}
/*
* Insertin Sort
* Picks a element from the array and insert into the sorted array.
* O(n) nearly sorted.
* O(n^2)
*/
double SortingAlgorithms::insertionSort(int *A, int N) {
	clock_t timeStart, timeEnd;
	int j, key;

	int *arr = new int[N];
	for (int i = 0; i < N; i++) arr[i] = A[i];

	timeStart = clock();
	for (int i = 1; i < N; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j]>key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
	timeEnd = clock();

	delete[] arr;
	return  (double)(timeEnd - timeStart) / CLOCKS_PER_SEC;
}
/*
* Chooses a pivot from the end of the array.
* Divides the array to the 2 part left side of the array is lesser than pivot right side of the
* array is greater than pivot.
* Returns the index of the median.(If it is not sorted)
*/
int SortingAlgorithms::partition(int *A, int l, int u) {
	int temp;
	int x = A[u]; //pivot
	int i = l - 1;

	for (int j = l; j <= u - 1; j++) {
		if (A[j] <= x) {
			i++;
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}

	temp = A[i + 1];
	A[i + 1] = A[u];
	A[u] = temp;

	return i + 1;
}
/*
* Quick Sort
* Divides the array to the two parts and sorts the parts until it is completely
* sorted.
* O(n.logn)
* Worst case n^2
*/
void SortingAlgorithms::Quick_Sort(int *A, int l, int u) {
	int q;
	if (l < u) {
		q = partition(A, l, u);
		Quick_Sort(A, l, q - 1);
		Quick_Sort(A, q + 1, u);
	}
}
/*
* Public quick sort function.
*/
double SortingAlgorithms::quickSort(int *A, int N) {
	clock_t timeStart, timeEnd;

	int *arr = new int[N];
	for (int i = 0; i < N; i++) arr[i] = A[i];

	timeStart = clock();
	Quick_Sort(arr, 0, N - 1);
	timeEnd = clock();

	delete[] arr;
	return  (double)(timeEnd - timeStart) / CLOCKS_PER_SEC;
}
/*
* Shell Sort
* Takes a gap for swapping far items.
* Starts the loop from the gap value after that compares the
* elements array[gap] with the array[gap-gap] if it is smaller
* swaps the elements. This process  goes on until the array is
* sorted
* O(n^2) worst case
* avg O(nlogn^2)
*/
double SortingAlgorithms::shellSort(int *A, int N) {

	clock_t timeStart, timeEnd;

	int *arr = new int[N];
	for (int i = 0; i < N; i++) arr[i] = A[i];

	timeStart = clock();
	for (int gap = N / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < N; i += 1)
		{
			int temp = arr[i];
			int j;
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];
			arr[j] = temp;
		}
	}
	timeEnd = clock();

	delete[] arr;
	return  (double)(timeEnd - timeStart) / CLOCKS_PER_SEC;
}