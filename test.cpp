#include <iostream>

#include "SortingAlgorithm.h"
#include "SelectionSort.h"

int main(int argc, char* argv[]) {
    int list[8] = {5, 1, 2, 8, 7, 6, 3, 4};

    SortingAlgorithm* alg = new SelectionSort;

    alg->sort(list, 8);

    for (int i = 0; i < 8; i++) {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
