// SortingAlgorithms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<array>
#include<math.h>
using namespace std;

void PrintArray(int arr[20])
{
	for (int x = 0; x < 20; x++)
	{
		cout << arr[x] << " ";
	}
	cout << endl;
}

void BubbleSort(int arr[20])
{
	int temp = 0;
	for (int y = 0; y < 20 - 1; y++)
	{
		for (int x = 0; x < 20 - 1 - y; x++)
		{
			if (arr[x + 1] < arr[x])
			{
				temp = arr[x];
				arr[x] = arr[x + 1];
				arr[x + 1] = temp;
			}
		}
	}
	PrintArray(arr);
}

/*
void Merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	// create temp arrays
	int L[n1], R[n2];

	// Copy data to temp arrays L[] and R[]
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	// Merge the temp arrays back into arr[l..r]
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// Copy the remaining elements of L[], if there
	//are any 
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	// Copy the remaining elements of R[], if there
	//are any
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void MergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		int m = l + (r - l) / 2;

		// Sort first and second halves
		MergeSort(arr, l, m);
		MergeSort(arr, m + 1, r);

		Merge(arr, l, m, r);
	}
	PrintArray(arr);
}
*/

int main()
{
	int arr[20] = { 16, 2, 77, 40, 12, 71, 12, 9, 89, 75, 32, 54, 68, 140, 12, 140, 14, 57, 63, 55 };
	cout << "Before sort: " << endl;
	PrintArray(arr);
	cout << "Bubble sort: " << endl;
	BubbleSort(arr);
	cout << "Merge sort: " << endl;
	//MergeSort(arr, 0, 19);
	cin.get();
    return 0;
}

