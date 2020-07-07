#include <stdio.h>
#include "sortalgo.h"

int main (void)
{
    int arrsize, bubbleSteps;
    int numbersForBubbleSort[8] = {6,3,8,5,2,7,4,1};
    //int numbersForSelectionSort[8] = {6,3,8,5,2,7,4,1};
    //int numbersForInsertionSort[8] = {6,3,8,5,2,7,4,1};
    //int numbersForMergeSort[8] = {6,3,8,5,2,7,4,1};

    arrsize = 8;

    // Using Bubble Sort
    bubbleSteps = bubbleSort(numbersForBubbleSort, arrsize);
    printSortedArray(numbersForBubbleSort, arrsize);
    printf("Bubble Sort (# of steps) : %i\n\n", bubbleSteps);

    return 0;
}



