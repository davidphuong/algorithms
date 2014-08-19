#include <iostream>

#include "SortingAlgorithm.h"
#include "SelectionSort.h"
#include "InsertionSort.h"

int main(int argc, char* argv[]) {
    int list[8] = {5, 1, 2, 8, 7, 6, 3, 4};

    // SortingAlgorithm* alg = new SelectionSort;
    SortingAlgorithm* alg = new InsertionSort;

    alg->sort(list, 8);

    for (int i = 0; i < 8; i++) {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
