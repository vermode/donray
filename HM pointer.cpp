#include <iostream>

namespace std {

    // Function to fill the array with user input
    void fillArray(int* arr, int size) {
        cout << "Enter " << size << " elements for the array:\n";
        for (int i = 0; i < size; ++i) {
            cin >> *(arr + i);
        }
    }

    // Function to print the elements of the array
    void printArray(int* arr, int rows, int cols) {
        cout << "Array elements:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << *(arr + i * cols + j) << " ";
            }
            cout << "\n";
        }
    }

    // Function to print the diagonal of the array
    void printDiagonal(int* arr, int size) {
        cout << "Diagonal elements:\n";
        for (int i = 0; i < size; ++i) {
            cout << *(arr + i * size + i) << " ";
        }
        cout << "\n";
    }

    // Function to print all possible triangles
    void printTriangles(int* arr, int size) {
        cout << "All possible triangles:\n";
        for (int i = 0; i < size; ++i) {
            for (int j = i; j < size; ++j) {
                for (int k = j; k < size; ++k) {
                    cout << *(arr + i * size + j) << " "
                          << *(arr + j * size + k) << " "
                          << *(arr + k * size + i) << "\n";
                }
            }
        }
    }
}

using namespace std;

int main() {
    const int size = 3;
    int array[size][size] = {0};

    int choice = 0;
    while (choice != -1) {
        cout << "Options:\n"
             << "1. Fill Array\n"
             << "2. Print Array\n"
             << "3. Print Diagonal\n"
             << "4. Print Triangles\n"
             << "-1. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                fillArray(&array[0][0], size * size);
                break;
            case 2:
                printArray(&array[0][0], size, size);
                break;
            case 3:
                printDiagonal(&array[0][0], size);
                break;
            case 4:
                printTriangles(&array[0][0], size);
                break;
            case -1:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}
