#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quick_sort(int *, int, int);
int Partition(int *,int ,int);
void main()
{
    int size;
    printf("enter Array size : ");
    scanf("%d", &size);
    int A[10000];
    for (int i = 0; i < size; i++)
    {
        A[i] = rand()%10;
    }
    int low = 0, high = size - 1;
    quick_sort(A, low, high);

}
void quick_sort(int *A, int low, int high)
{
    if (low < high)
    {
        int indexOfPartition = Partition(A, low, high);
        quick_sort(A, low, indexOfPartition - 1);  //for left sub array
        quick_sort(A, indexOfPartition + 1, high); //for right sub array
    }
}
int Partition(int *A, int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
    int temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}