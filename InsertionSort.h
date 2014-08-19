#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include "SortingAlgorithm.h"

class InsertionSort : public SortingAlgorithm {
    public:
        virtual void sort(int arr[], int size);

    private:
        void swap(int& x, int& y);
};

#endif
