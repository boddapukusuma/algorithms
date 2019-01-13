#include<stdio.h>
#include<stdlib.h>
 

void main()
{
	int *arr = (int*)malloc(1000 * sizeof(int));
	int i, size, mid,key,low,high,flag=0;            //key is the element to be searched
	printf("enter size of array");
	scanf("%d", &size);        //size of the array
	printf("enter element to be searched");
	scanf("%d", &key);
	printf("enter sorted elements");
	for (i = 0; i < size; i++)     //reading elements into array 
		scanf("%d", &arr[i]);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		mid = (int)((low + high) / 2);     //finding the mid of the array
		if (arr[mid] <= key)
		{
			if (arr[mid] == key)
			{
				flag = 1;
				printf("element found at %d\n", mid+1);
				break;
			}
			else                    //if arr[mid]<mid then search in the right side of the array
				low = mid + 1;
		}
		else                        //if arr[mid]>mid then search in the left side of the array
		{
			high= mid - 1;
		}
	}
	if (flag == 0)
		printf("element not found");
	system("pause");
}









