/*Linear search*/
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int size,i,key,flag=0;//key is element to be searched.
	int *array = (int*)malloc(10000 * sizeof(int));
	printf("enter the size of array\n");
	scanf("%d", &size);
	printf("enter the element to be searched in the array\n");
	scanf("%d", &key);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
		if (array[i] == key)  //comparing current element at position i with key
		{
			flag = 1;  
			break;
		}
	}
	if (flag == 1)    //if element is found
		printf("Element %d found at %d\n", key, i);
	else              // if element is not found
		printf("element not found\n");
	system("pause");
}