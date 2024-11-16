/*
----------------------------------------
     السلام عليكم ورحمة الله وبركاته
    بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
    1% CHANCE, 99% FAITH
            ameerhamzah.d
----------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

struct myArray {
    int total_size, used_size, *ptr;
};

void createArray (struct myArray *p, int tSize, int uSize) {
    p->total_size = tSize;
    p->used_size = uSize;
    p->ptr = (int *)malloc(tSize * sizeof(int));
}

void getValue(struct myArray *p) {
    int x;

    for (int i = 0; i < p->used_size; i++) {
        printf("%d -> ", i);
        scanf("%d", &x);
        (p->ptr)[i] = x;
    }
}

void showValue(struct myArray *p) {
    for(int i = 0; i < p->used_size; i++)
    {
        printf("%d -> %d\n", i, (p->ptr)[i]);
    }
}

int main()
{
    int t, n;

    printf("Enter total size of an array: ");
    scanf("%d", &t);
    printf("Enter used size of the array: ");
    scanf("%d", &n);

    struct myArray memory;
    createArray(&memory, t, n);

    printf("Inputs: \n");
    getValue(&memory);

    printf("Outputs: \n");
    showValue(&memory);

    return 0;
}