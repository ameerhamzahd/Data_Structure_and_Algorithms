/*
----------------------------------------
     السلام عليكم ورحمة الله وبركاته
    بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
    1% CHANCE, 99% FAITH
            ameerhamzah.d
----------------------------------------
*/

#include <stdio.h>

void getValue(int a[], int t, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Index %d -> ", i);
        scanf("%d", &a[i]);
    }
}

void display(int a[], int t, int n)
{
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n\n");
}

int findElement(int a[], int t, int n, int element)
{
    int flag = 0, left = 0, right = (n - 1);

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (a[mid] == element)
        {
            return mid;
        }
        else if (a[mid] < element)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

void deletion(int a[], int index, int t, int n)
{
    for (int i = index; i <= (n - 1); i++)
    {
        a[i] = a[i + 1];
    }
}

int main()
{
    int t, n;
    scanf("%d %d", &t, &n);
    int a[t];

    getValue(a, t, n);
    display(a, t, n);

    int element, index;
    scanf("%d", &element);

    index = findElement(a, t, n, element);

    if (index == -1)
    {
        printf("Invalid Deletion.\n");
    }
    else
    {
        deletion(a, index, t, n);
        n--;
        display(a, t, n);

        printf("Valid Deletion.\n");
    }

    return 0;
}