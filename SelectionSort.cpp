#include "SelectionSort.h"
#include <iostream>

void SelectionSort::sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_pos = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[min_pos] > arr[j]) {
                min_pos = j;
            }
        }

        if (i != min_pos) {
            swap(arr[i], arr[min_pos]);
        }
    }
}

void SelectionSort::swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}
