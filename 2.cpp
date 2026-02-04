#include <iostream>
#include <ctime>
#include <random>
int main() {
    int rows = 100;
    int cols = 200;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    std::mt19937 b(std::time(0));
	std::uniform_int_distribution<int> dist(-3, 10);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = dist(b);
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}