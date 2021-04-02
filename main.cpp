#include <iostream>
#include "omp.h"

void LU_Decomposition(double * A, double * L, double * U, int n);
void print(double* matrix, int n);

int main(int argc, char* argv[]) {
    const int n = 3;
    double A[n * n] = {10, -7, 0, -3, 6, 2, 5, -1, 5};
    double L[n * n];
    double U[n * n];
    // LU_Decomposition(A, L, U, n);
    print(A, n);
    return 0;
}

void LU_Decomposition(double * A, double * L, double * U, int n) {
    std::cout << std::endl;
}

void print(double* matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i * n + j] << " ";
        }
        std::cout << std::endl;
    }
}