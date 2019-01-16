#include<stdio.h>
#include<stdlib.h>

int insertion(int arr[], int size)
{
	int i, j,temp;
	for (i = 1; i < size; i++)
	{
		for (j = i; j > 0; j--)      //from the current position (i) we are moving left side of the array till starting of the array
		{
			if (arr[j] < arr[j - 1])      //if the leftmost element is greater than the rightmost element then we will swap the elements.
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
			else       //if not the all the elements to the left are in sorted order .
				break;
		}
	}
	return 0;
}

void main()
{
	int *arr = (int*)malloc(100 * sizeof(int));
	int size,i;
	printf("Enter the size of the array");
	scanf("%d", &size);
	printf("Enter the elements");
	for (i = 0; i < size; i++)   //reading elements
		scanf("%d", &arr[i]);
	insertion(arr, size);   //calling function
	for (i = 0; i < size; i++)    //printing elements
		printf("%d ", arr[i]);
}