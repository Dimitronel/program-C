#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double calculateExpression(char *  expression) {
    char *  tokenizedExpression[100];
    int i = 0;
    char *  token = strtok(expression, " ");
    while(token != NULL) {
        tokenizedExpression[i++] = token;
        token = strtok(NULL, " ");
    }

    double result = 0;
    for(int j = 0; j < i; j++) {
        if(strcmp(tokenizedExpression[j], "+") == 0) {
            result += atof(tokenizedExpression[j+1]);
            j++;
        } else if(strcmp(tokenizedExpression[j], "-") == 0) {
            result -= atof(tokenizedExpression[j+1]);
            j++;
        } else if(strcmp(tokenizedExpression[j], "u-") == 0) {
            result = -atof(tokenizedExpression[j+1]);
            j++;
        } else {
            result = atof(tokenizedExpression[j]);
        }
    }

    return result;
}

int main() {
    char expression[100];
    printf("Vvedite znacheniaе: ");
    fgets(expression, 100, stdin);
    double result = calculateExpression(expression);
    printf("Itog: %f\n", result);
    return 0;
}

