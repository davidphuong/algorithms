#include "InsertionSort.h"

void InsertionSort::sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

void InsertionSort::swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}
