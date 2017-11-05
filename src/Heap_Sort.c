#include "Heap_Sort.h"
#include <stdlib.h>
#include <stdio.h>


void random_shuffle(int arr[],int maximum)
{
    int i, temp;
    for (i = maximum - 1; i > 0; i-- ) {
         temp = arr[i];
    }
}

void  max_heapify(int a[], int i, int heapsize)
{
    int tmp, largest;
    int l = (2 * i) + 1;
    int r = (2 * i) + 2;
    if ((l <= heapsize) && (a[l] > a[i]))
         largest = l;
    else
         largest = i;
    if ((r <= heapsize) && (a[r] > a[largest]))
         largest = r ;
    if (largest != i)
    {
         tmp = a[i];
         a[i] = a[largest];
         a[largest] = tmp;
         max_heapify(a, largest, heapsize);
    }

}

void  build_max_heap(int a[], int heapsize)
{
    int i;
    for (i = heapsize/2; i >= 0; i--)
    {
         max_heapify(a, i, heapsize);
    }

}

void heap_sort(int a[], int heapsize)
{
    int i, tmp;
    build_max_heap(a, heapsize);
    for (i = heapsize; i > 0; i--)
    {
        tmp = a[i];
        a[i] = a[0];
        a[0] = tmp;
        heapsize--;
        max_heapify(a, 0, heapsize);
    }
}
