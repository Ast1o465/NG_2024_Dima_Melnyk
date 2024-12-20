#include <iostream>
using namespace std;

struct Matrix {
    int rows;
    int cols;
    int data[10][10];
};

void inputMatrix(Matrix& matrix, const string& name) {
    cout << "Enter number of rows for matrix " << name << ": ";
    cin >> matrix.rows;
    cout << "Enter number of columns for matrix " << name << ": ";
    cin >> matrix.cols;

    cout << "Enter elements for matrix " << name << ":\n";
    for (int row = 0; row < matrix.rows; row++) {
        for (int col = 0; col < matrix.cols; col++) {
            cin >> matrix.data[row][col];
        }
    }
}

void printMatrix(const Matrix& m, const string& name) {
    cout << "Matrix " << name << ":\n";
    for (int row = 0; row < m.rows; row++) {
        for (int col = 0; col < m.cols; col++) {
            cout << m.data[row][col] << " ";
        }
        cout << endl;
    }
}

Matrix addMatrices(const Matrix& m1, const Matrix& m2) {
    Matrix result;
    result.rows = m1.rows;
    result.cols = m1.cols;

    for (int row = 0; row < m1.rows; row++) {
        for (int col = 0; col < m1.cols; col++) {
            result.data[row][col] = m1.data[row][col] + m2.data[row][col];
        }
    }
    return result;
}

Matrix subtractMatrices(const Matrix& m1, const Matrix& m2) {
    Matrix result;
    result.rows = m1.rows;
    result.cols = m1.cols;

    for (int row = 0; row < m1.rows; row++) {
        for (int col = 0; col < m1.cols; col++) {
            result.data[row][col] = m1.data[row][col] - m2.data[row][col];
        }
    }
    return result;
}

int main() {
    Matrix matrix1, matrix2, result;
    char operation;

    cout << "Matrix Calculator\n\n";
    
    inputMatrix(matrix1, "A");
    inputMatrix(matrix2, "B");

    if (matrix1.rows != matrix2.rows || matrix1.cols != matrix2.cols) {
        cout << "Error: matrices must be of the same size!\n";
        return 1;
    }

    cout << "\nChoose operation (+/-): ";
    cin >> operation;

    if (operation == '+') {
        result = addMatrices(matrix1, matrix2);
        cout << "\nAddition result:\n";
    }
    else if (operation == '-') {
        result = subtractMatrices(matrix1, matrix2);
        cout << "\nSubtraction result:\n";
    }
    else {
        cout << "Invalid operation!\n";
        return 1;
    }

    printMatrix(result, "Result");
    return 0;
}