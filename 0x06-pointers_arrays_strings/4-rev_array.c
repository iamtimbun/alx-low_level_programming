#include <stdio.h>
#include "main.h"

/*
 * reverse_array- reverse the array
 *
 */

void reverse_array(int *a, int n)
{
	int aux[n];

	for (int i = 0; i < n; i++){
		aux[n - 1 - i] = arr[i];
	}
	 for (int i = 0; i < n; i++) {
        arr[i] = aux[i];
    }
}
