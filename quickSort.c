#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int high)
{
    int pivot= a[high];
    int i=low-1;

    for(int j=low; j<high; j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i+1], &a[high]);
    return i+1;
}

void quickSort(int a[], int low, int high)
{
    if(low < high)
    {
        int index=partition(a, low,  high);
        quickSort(a, low, index-1);
        quickSort(a,index+1, high);
    }
}

void printArray(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int n, a[20];
    printf("number of elements: ");
    scanf("%d", &n);
    printf("elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Original array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    quickSort(a, 0, n);
    printArray(a, n);
}