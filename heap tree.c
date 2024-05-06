#include <stdio.h>
void swap(int *a, int *b)
{
int temp = *b;
*b = *a;
*a = temp;
}

void printArray(char message[], int arr[], int n)
{
printf("%s ",message);
for (int i = 0; i < n; ++i)
{
printf("%d ", arr[i]);
}
printf("\n");
}
void heapify(int arr[], int n, int i)
{
int largest = i; 
int leftChild = 2 * i + 1; 
int rightChild = 2 * i + 2;
if (leftChild < n && arr[leftChild] > arr[largest])
largest = leftChild;

if (rightChild < n && arr[rightChild] > arr[largest])
largest = rightChild;
if (largest != i)
{
swap(&arr[i], &arr[largest]);

heapify(arr, n, largest);
}
}

void buildHeap(int arr[], int n)
{

int lastNonLeafNode = (n / 2) - 1;
 
node and heapify each node
for (int i = lastNonLeafNode; i >= 0; i--)
{
heapify(arr, n, i);
}
}

void main()
{
	
int arr[] = {4, 18, 17, 10, 19, 20, 14, 8, 3, 12};

int n = sizeof(arr) / sizeof(arr[0]);
printArray("\nThe Array is : ", arr, n);
buildHeap(arr, n);
printArray("\nThe Array representation of Max_Heap is : ", arr, n);
}
