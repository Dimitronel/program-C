#include <stdio.h>

int main() {
    FILE  * input_file,  * output_file;
    char line[100];
    int year;

    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Ошибка открытия файла.\n");
        return 1;
    }

    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("Ошибка открытия файла.\n");
        fclose(input_file);
        return 1;
    }

    while (fgets(line, sizeof(line), input_file) != NULL) {
        sscanf(line, "%s %s %s %d", NULL, NULL, NULL, &year);
        if (year > 1980) {
            fprintf(output_file, "%s\n", line);
        }
    }

    fclose(input_file);
    fclose(output_file);

    return 0;
}
