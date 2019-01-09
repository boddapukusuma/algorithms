#include<stdio.h>
#include<stdlib.h>



void merge(int a[], int l, int h)   //merges the two arrays into single array in sorted order.
{
	int *b = (int*)malloc(500 * sizeof(int)); // b is temporary array.
	int k = 0, temp, t, j = 0, low,mid;
	for (j = 0; j < 50; j++)
		b[j] = 0;
	mid = (int)(l + h) / 2;
	t = mid+1;
	low = l;
	while (l <= mid && t <= h)
	{
		if (a[t] < a[l])
		{
			b[k] = a[t];
			t = t + 1;
			k = k + 1;
		}
		else
		{
			b[k] = a[l];
			l = l + 1;
			k = k + 1;
		}
	}
	if (l <=mid)   //If any elements left in the leftmost array they are inserted into array b.
	{
		while (l <= mid)
		{
			b[k] = a[l];
			l = l + 1;
			k = k + 1;
		}
	}
	else    //If any elements left in the rightmost array they are inserted into array b.
	{
		while (t <= h)
		{
			b[k] = a[t];
			t = t + 1;
			k = k + 1;
		}
	}
	k = 0;
	for (j = low; j <= h; j++) //The elements in temporary array b are copied to array a.
	{
		a[j] = b[k];
		k = k + 1;
	}
}

void mergesort(int a[],int l,int h)   //divides a single array into two parts.
{
	int mid;
	if (l < h)
	{
		mid = (int)(l + h) / 2;
		mergesort(a, l, mid);
		mergesort(a, mid + 1, h);
		merge(a, l, h);
	}
}


void main()
{
	int *a=(int*)malloc(1000*sizeof(int));
	int n,i,l=0,h;
	printf("enter the size of the array");
	scanf("%d", &n);
	h = n - 1;
	printf("enter the elements");
	for (i = 0; i < n; i++) //reading elements
		scanf("%d", &a[i]);
	mergesort(a, l, h);
	for (i = 0; i < n; i++) //printing elements
		printf("%d ", a[i]);
	system("pause");
}