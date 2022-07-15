#include "main.h"

/**
* reverse_array -> reversing an array
* @a: array a
* @n: an element of an array
*/
void reverse_array(int *a, int n)
{
	int *p, i, aux, arr;

	p = a;
	int aux[n];

	for (int i = 0; i < n; i++) {
	aux[n - 1 - i] = arr[i];
	}

	for (int i = 0; i < n; i++) {
	arr[i] = aux[i];
	}
}
