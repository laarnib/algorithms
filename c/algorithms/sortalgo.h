void printSortedArray(int num[], int size);
int temp, step, swapCounter;

// Bubble Sort Algorithm
int bubbleSort(int numbers[], int arrsize)
{
    //Set the swap counter to a non zero value
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
            if (numbers[i] > numbers[i + 1])
            {   
                temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
                swapCounter++;
            }
        }
    }
    return step;
} 

// Selection Sort
int selectionSort (int numbers[], int size)
{
    int min, minIndex;

    step = 0;
    for (int i = 0; i < size; i++)
    {
        step++;
        // Initialize the min value to the first element of the list
        min  = numbers[i];
        minIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            step++;
            if (min > numbers[j])
            {
                min = numbers[j];
                minIndex = j;
            }
        }
        // Swap minimum number to the first unsorted element
        temp = numbers[i];
        numbers[i] = min;
        numbers[minIndex] = temp;
    }

    return step;
}

// Insertion Sort
int insertionSort(int numbers[], int size)
{
    int value, indexOfValue;
    
    step = 0;
    for (int i = 1; i < size; i++)
    {
        value = numbers[i];
        indexOfValue = i;

        for (int j = i - 1; j >= 0; j--)
        {
            step++;
            if (value < numbers[j])
            {
                numbers[indexOfValue] = numbers[j];
                numbers[j] = value;
                indexOfValue--;
            }
            else
            {
                break;
            }
            
        }
        
    }
    return step;
}

void mergeSort(int numbers, int left, int right)
{
    if (left < right)
    {
        // Calculate the mid
        int mid = (left + right) / 2;
        mergeSort(numbers, left, mid);  // merge sort the left portion of the array which starts at 0 and ends at mid;
        mergeSort(numbers, mid + 1, right); // merge sort the right portion of the array
        merge(numbers, left, mid, right);
    }
}

/*// Merge the two sorted portions of the array
void merge(int numbers[], int left, int mid, int right)
{
    int i, j, k;
    int temp[right];  // Declare another array to store the sorted numbers
}*/

// Print sorted array
void printSortedArray(int num[], int size)
{
    printf("Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%i ", num[i]);
    }

    printf("\n");
}




