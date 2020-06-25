int linearsearch(int numlist[], int size, int find)
{
	for(int i = 0; i < size; i++)
	{
		if (find == numlist[i])
			return 1;
	}

	return 0;
}

int binarysearch(int numlist[], int size, int find)
{
    int low, mid, high, found;

    low = 0;
    mid = high / 2;
    high = size - 1;
    found = 0;

    while (found == 0)
    {
        if (find == numlist[mid])
        {
            return 1;
        }
        else if (find < numlist[mid])
        {
            high = mid;
            mid = high / 2;
        }
        else if (find > numlist[mid])
        {
            low = mid;
            mid = high / 2;
        }
    }

    return 0;
}
	