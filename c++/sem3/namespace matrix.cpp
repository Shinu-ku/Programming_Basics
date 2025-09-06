// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
using namespace std;

// Namespace for 3x3 matrix operations
namespace Matrix3x3 {
    // Function to display a 3x3 matrix
    void displayMatrix(int matrix[3][3]) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Function to add two 3x3 matrices
    void addMatrices(int mat1[3][3], int mat2[3][3]) {
        int result[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        cout << "Result of 3x3 matrix addition:" << endl;
        displayMatrix(result);
    }

    // Function to subtract two 3x3 matrices
    void subtractMatrices(int mat1[3][3], int mat2[3][3]) {
        int result[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result[i][j] = mat1[i][j] - mat2[i][j];
            }
        }
        cout << "Result of 3x3 matrix subtraction:" << endl;
        displayMatrix(result);
    }

    // Function to multiply two 3x3 matrices
    void multiplyMatrices(int mat1[3][3], int mat2[3][3]) {
        int result[3][3] = {0};
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    result[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        cout << "Result of 3x3 matrix multiplication:" << endl;
        displayMatrix(result);
    }
}

int main() {
    // Defining two 3x3 matrices
    int mat1[3][3], mat2[3][3];

    // User input for the first matrix
    cout << "Enter values for the first 3x3 matrix (row by row):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat1[i][j];
        }
    }

    // User input for the second matrix
    cout << "Enter values for the second 3x3 matrix (row by row):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat2[i][j];
        }
    }

    // Performing matrix operations using the Matrix3x3 namespace
    cout << "\n3x3 Matrix Operations:" << endl;
    
    // Addition of two 3x3 matrices
    Matrix3x3::addMatrices(mat1, mat2);
    
    // Subtraction of two 3x3 matrices
    Matrix3x3::subtractMatrices(mat1, mat2);
    
    // Multiplication of two 3x3 matrices
    Matrix3x3::multiplyMatrices(mat1, mat2);

    return 0;
}

