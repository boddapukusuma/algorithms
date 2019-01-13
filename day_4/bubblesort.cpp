//In bubble sort after completion  of each iteration we get the smallest element at the end(i.e, n-i-1).
#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int a[],int size)
{
	int i, j, temp;  //temp is the temporary element
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (a[j]>a[j + 1])      //if a[j]>a[j+1] swap the elements
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}




void main()
{
	int *arr = (int*)malloc(1000 * sizeof(int));
	int i, size,j,temp;         
	printf("enter size of array");
	scanf("%d", &size);        //size of the array
	printf("enter elements");
	for (i = 0; i < size; i++)     //reading elements into array 
		scanf("%d", &arr[i]);
	bubble_sort(arr, size);
	for (i = 0; i < size; i++)    //printing elements
		printf("%d ", arr[i]);
	system("pause");
}









