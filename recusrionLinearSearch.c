#include<stdio.h>

int linearSearch(int arr[], int size, int key, int index)
{
    if(index >= size)
    {
        return -1;
    }
    else
    {
        return index;
    }
     return linearSearch(arr, size, key, index + 1);
}

int main()
{
    int size, key, index;
    int arr[] = {1,2,3,4,5};
    key = 4;
    index= 0;
    size = 5;

    index = linearSearch(arr, size, key, index);
    printf("%d found at %d", key, index+1);
}
