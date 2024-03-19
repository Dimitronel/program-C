#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[32];
    char surname[32];
    int year_of_birth;
} human;

int main() {
    human people[4];
    int i;

    // Ввод данных из консоли или из файла
    for(i = 0; i < 4; i++) {
        printf("Введите имя, фамилию и год рождения человека: ");
        scanf("%s %s %d", people[i].name, people[i].surname, &people[i].year_of_birth);
    }

    // Упорядочивание массива по году рождения
    for(i = 0; i < 3; i++) {
        for(int j = i + 1; j < 4; j++) {
            if(people[i].year_of_birth > people[j].year_of_birth) {
                human temp = people[i];
                people[i] = people[j];
                people[j] = temp;
            }
        }
    }

    // Вывод упорядоченного массива
    for(i = 0; i < 4; i++) {
        printf("Имя: %s, Фамилия: %s, Год рождения: %d\n", people[i].name, people[i].surname, people[i].year_of_birth);
    }

    return 0;
}


