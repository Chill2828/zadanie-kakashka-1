#include <iostream>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int rows = 100;
    int cols = 200;

    float** matrix = new float*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new float[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = (float(rand()) / float(RAND_MAX)) * 2.0f - 1.0f;
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