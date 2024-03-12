#include <stdio.h>
#include <stdlib.h>

double *  *  allocateMatrix(int n) {
    double *  *  matrix = (double *  * ) malloc(n  *  sizeof(double * ));
    for (int i = 0; i < n; i++) {
        matrix[i] = (double * ) malloc(n  *  sizeof(double));
    }
    return matrix;
}

void freeMatrix(double *  *  matrix, int n) {
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

double *  *  calculateMatrixOperation(double *  *  matrix1, double *  *  matrix2, char operation, int n) {
    double *  *  result = allocateMatrix(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            switch (operation) {
                case '+':
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                    break;
                case '-':
                    result[i][j] = matrix1[i][j] - matrix2[i][j];
                    break;
                case ' * ':
                    result[i][j] = matrix1[i][j]  *  matrix2[i][j];
                    break;
                default:
                    printf("Neverny znak.\n");
                    freeMatrix(result, n);
                    return NULL;
            }
        }
    }
    return result;
}

int main() {
    int n;
    printf("Vvod ramera matrix: ");
    scanf("%d", &n);

    double *  *  matrix1 = allocateMatrix(n);
    double *  *  matrix2 = allocateMatrix(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Vvedite element martrix [%d][%d]: ", i, j);
            scanf("%lf", &matrix1[i][j]);
            matrix2[i][j] = matrix1[i][j];
        }
    }

    char operation;
    printf("Vvod znaka operation: ");
    scanf(" %c", &operation);

    double *  *  result = calculateMatrixOperation(matrix1, matrix2, operation, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%lf ", result[i][j]);
        }
        printf("\n");
    }

    freeMatrix(matrix1, n);
    freeMatrix(matrix2, n);
    freeMatrix(result, n);

    return 0;
}
