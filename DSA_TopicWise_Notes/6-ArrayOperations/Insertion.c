/*
----------------------------------------
     السلام عليكم ورحمة الله وبركاته
    بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
    1% CHANCE, 99% FAITH
            ameerhamzah.d
----------------------------------------
*/

#include<stdio.h>

void getValue(int a[], int t, int n) {
    for(int i = 0; i < n; i++)
    {
        printf("Index %d -> ", i);
        scanf("%d", &a[i]);
    }
}

void display(int a[], int t, int n) {
    printf("\n");
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n\n");
}

void insertion (int a[], int element, int index, int t, int n) {
    for(int i = (n - 1); i >= 0; i--)
    {
        a[i + 1] = a[i];
    }

    a[index] = element;
}

int main()
{
    int t, n;
    scanf("%d %d", &t, &n);
    int a[t];

    getValue(a, t, n);
    display(a, t, n);

    int element, index;
    scanf("%d %d", &element, &index);

    if(index >= t || (n + 1) == t)
    {
        printf("Invalid Insertion.\n");
    }
    else
    {
        insertion(a, element, index, t, n);
        n++;
        display(a, t, n);

        printf("Valid Insertion.\n");
    }

    return 0;
}