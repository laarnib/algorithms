void printSortedArray(int num[], int size);
void swap(int array[], int index);

// Bubble Sort Algorithm
int bubbleSort(int numbers[], int arrsize)
{
    int swapCounter, step;

    /*Set the swap counter to a non zero value so the program
       can enter the while loop */
    swapCounter = -1;

    // Track number of steps it takes to sort the numbers
    step = 0;

    // Sort until no swap needs to be done or swapCounter is equal to zero
    while (swapCounter != 0)
    {
        // Reset the swap counter to zero
        swapCounter = 0;
        step++;

        // Swap adjacent elements if not in order
        for (int i = 0; i < arrsize - 1; i++)
        {
            step++;
            if (numbers[i] > numbers[i+1])
            {   
                swap(numbers, i);
                swapCounter++;
            }
        }
    }
    
    return step;
}

// Swap two numbers
void swap(int array[], int index)
{
    int temp;

    temp = * (array + index);
    * (array + index) = * (array + (index + 1));
    * (array + (index + 1)) = temp;
}

// Print sorted array
void printSortedArray(int num[], int size)
{
    printf("Sorted Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%i ", num[i]);
    }

    printf("\n");
}

