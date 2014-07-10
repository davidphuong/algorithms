#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include "SortingAlgorithm.h"

class SelectionSort : public SortingAlgorithm {
    public:
        virtual void sort(int arr[], int size);

    private:
        void swap(int& x, int& y);
};

#endif
