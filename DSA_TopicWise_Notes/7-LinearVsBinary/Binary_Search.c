/*
----------------------------------------
     السلام عليكم ورحمة الله وبركاته
    بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
    1% CHANCE, 99% FAITH
            ameerhamzah.d
----------------------------------------
*/

#include <stdio.h>

void getValue(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Index %d -> ", i);
        scanf("%d", &a[i]);
    }
}

void display(int a[], int n)
{
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n\n");
}

void sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = 0;

        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

int binarySearch(int a[], int n, int element)
{
    int left = 0, mid, right = n - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (a[mid] == element)
        {
            return mid;
        }
        else if (a[mid] < element)
        {
            left = mid + 1;
        }
        else if (a[mid] > element)
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    getValue(a, n);
    display(a, n);

    int element;
    printf("Enter the element to search: ");
    scanf("%d", &element);

    //  Binary Search: O(log n)
    sort(a, n);
    display(a, n);

    int found = (binarySearch(a, n, element)) + 1;

    if (found == 0)
    {
        printf("Element not found in the array.\n");
    }
    else
    {
        printf("Element found at index %d.\n", found);
    }

    return 0;
}