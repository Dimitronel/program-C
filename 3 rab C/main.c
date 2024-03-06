#include <stdio.h>
#include <ctype.h>

int main() {
    char str[80];
    printf("Vvod stroki: ");
    fgets(str, 80, stdin);

    for (int i = 0; i < 80; i++) {
        if (str[i] == '!' || str[i] == '?') {
            str[i] = str[i] == '!' ? '?' : '!';
        }
    }

    printf("Izmenynnai stroka: %s", str);

    return 0;
}
