
# SortingAlgorithms

Comparing the completion time of sorting algorithms.

Compared algorithms

 - Bubble Sort 
 - Selection Sort
 - Insertion Sort
 - Quick Sort
 - Shell Sort

To use the sorting functions you need to declare a object with a type of `SortingAlgorithms`
For example : `SortingAlgorithms sort` 

## Bubble Sort  `bubbleSort(int A[], int N)`

 - Checks the two elements with each other if left one is bigger then
   swaps the elements.
 - O(n) nearly sorted
 - O(n^2) 

  `int A[]` : Array to be sorted.
 `int N` : Array's size.
  `return value` : Returns the elapsed time.

## Selection Sort  `selectionSort(int A[], int N)`

 - Finds the minumum elements index and places the element to the beginning of the array.
 - Always n^2
 - O(n^2) 

  `int A[]` : Array to be sorted.
 `int N` : Array's size.
  `return value` : Returns the elapsed time.
 
   ## Insertion Sort  `insertionSort(int A[], int N)`

 - Picks a element from the array and insert into the sorted array.
 - O(n) nearly sorted.
 - O(n^2) 

  `int A[]` : Array to be sorted.
  `int N` : Array's size.
  `return value` : Returns the elapsed time.

## Quick Sort (Public)  `quickSort(int A[], int N)` 

This function calls private `Quick_Sort(int A[], int l, int u)` and private function calls
 `partition(int *A, int l, int u)` 

> `Quick_Sort(int A[], int l, int u)` 
> `int l` : Lower limit 
> `int u` : Upper limit 
> 
> `partition(int *A, int l, int u)`
>  `int l` : Lower limit 
> `int u` : Upper limit 
> Chooses a pivot from the end of the array.
> Divides the array to the 2 part left side of the array is lesser than pivot right side of the
> array is greater than pivot.
>Returns the index of the median.(If it is not sorted)

 - Divides the array to the two parts and sorts the parts until it is completely sorted.
 - O(n.logn)
 - Worst case n^2 
  
  `int A[]` : Array to be sorted.
 `int N` : Array's size.
  `return value` : Returns the elapsed time.

## Shell Sort  `shellSort(int A[], int N)`

 - Shell Sort
 - Takes a gap for swapping far items.
 - Starts the loop from the gap value after that compares the elements
   array[gap] with the array[gap-gap] if it is smaller swaps the
   elements. This process  goes on until the array is sorted
 - O(n^2) worst case
 - avg O(nlogn^2)

  `int A[]` : Array to be sorted.
 `int N` : Array's size.
  `return value` : Returns the elapsed time.
 
 
