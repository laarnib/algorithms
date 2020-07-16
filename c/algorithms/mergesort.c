#include <stdio.h>

void mergeSort (int [], int, int);
void merge(int numlist[], int lowerbound, int mid, int upperbound);

int main(void)
{
    //!showArray(numbers, cursors[i])
    //!showArray(numlist, cursors[i])
    int numbers[8] = {7,4,5,2,6,3,8,1};
    int size = 8;
    
    mergeSort(numbers, 0, size - 1);
    
    //PrintArray
    for (int i = 0; i < size; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
    return 0;
}

void mergeSort(int numlist[], int lowerbound, int upperbound)
{
    if (lowerbound < upperbound)
    {
        int mid = (lowerbound + upperbound)/2;
        mergeSort(numlist, lowerbound, mid);
        mergeSort(numlist, mid + 1, upperbound);
        merge(numlist, lowerbound, mid, upperbound);
    }
}

void merge(int numlist[], int lowerbound, int mid, int upperbound)
{
    int tempArr[upperbound + 1];
    int i, j, k; 
    i = lowerbound;
    j = mid + 1;
    k = lowerbound;
    
    while (i <= mid && j <= upperbound )
    {
        if (numlist[i] <= numlist[j])
        {
            tempArr[k] = numlist[i];
            i++;
        }
        else
        {
            tempArr[k] = numlist[j];
            j++;
        }
        k++;
    }
    
    if (i > mid)
    {
        while (j <= upperbound)
        {
            tempArr[k] = numlist[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            tempArr[k] = numlist[i];
            i++;
            k++;
        }
    }
    
    //copy the array
    for (k = lowerbound; k <= upperbound; k++)
    {
        numlist[k] = tempArr[k];
    }
}


