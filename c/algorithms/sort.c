#include <stdio.h>
#include "sortalgo.h"

int main (void)
{
    int arrsize, bubbleSteps, selectionSteps, insertionSteps;
    //int numbersForBubbleSort[8] = {6,3,8,5,2,7,4,1};
    int numbersForBubbleSort[8] = {1,2,3,4,5,6,7,8};
    //int numbersForBubbleSort[8] = {8,7,6,5,4,3,2,1};
    //int numbersForSelectionSort[8] = {6,3,8,5,2,7,4,1};
    int numbersForSelectionSort[8] = {1,2,3,4,5,6,7,8};
    //int numbersForSelectionSort[8] = {8,7,6,5,4,3,2,1};
    //int numbersForInsertionSort[8] = {6,3,8,5,2,7,4,1};
    int numbersForInsertionSort[8] = {1,2,3,4,5,6,7,8};
    //int numbersForInsertionSort[8] = {8,7,6,5,4,3,2,1};
    //int numbersForMergeSort[8] = {6,3,8,5,2,7,4,1};

    arrsize = 8;
    printf("Unsorted\n");
    printSortedArray(numbersForInsertionSort, arrsize);
    printf("\n\n");

    /// Using Bubble Sort
    bubbleSteps = bubbleSort(numbersForBubbleSort, arrsize);
    printSortedArray(numbersForBubbleSort, arrsize);
    printf("Bubble Sort (# of steps) : %i\n\n", bubbleSteps);

    // Selection Sort
    selectionSteps = selectionSort(numbersForSelectionSort, arrsize);
    printSortedArray(numbersForSelectionSort, arrsize);
    printf("Selection Sort (# of steps) : %i\n\n", selectionSteps);

    // Insertion Sort
    insertionSteps = insertionSort(numbersForInsertionSort, arrsize);
    printf("\nSorted\n");
    printSortedArray(numbersForInsertionSort, arrsize);
    printf("Insertion Sort (# of steps) : %i\n\n", insertionSteps);


    return 0;
}



