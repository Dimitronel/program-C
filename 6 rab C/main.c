#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fileInput, *fileOutput;
    char name[50];
    int year;

    fileInput = fopen("input.txt", "r");
    if (fileInput == NULL) {
        printf("Не удается открыть файл для чтенияn");
        return 1;
    }

    fileOutput = fopen("output.txt", "w");
    if (fileOutput == NULL) {
        printf("Не удается открыть файл для записиn");
        return 1;
    }

    while (fscanf(fileInput, "%s %s %s %d", name, name, name, &year) == 4) {
        if (year > 1980) {
            fprintf(fileOutput, "%s %s %s %d\n", name, name, name, year); // каждое значение на отдельной строке
        }
    }

    fclose(fileInput);
    fclose(fileOutput);

    printf("Программа завершена. Проверьте файл output.txtn");

    return 0;
}
