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

    for(i = 0; i < 4; i++) {
        printf("Vvedite Imy, Famaliy, God rozdenia: ");
        scanf("%s %s %d", people[i].name, people[i].surname, &people[i].year_of_birth);
    }

    for(i = 0; i < 3; i++) {
        for(int j = i + 1; j < 4; j++) {
            if(people[i].year_of_birth > people[j].year_of_birth) {
                human temp = people[i];
                people[i] = people[j];
                people[j] = temp;
            }
        }
    }


    for(i = 0; i < 4; i++) {
        printf("Imy: %s, Famaliy: %s, God rozdenia: %d\n", people[i].name, people[i].surname, people[i].year_of_birth);
    }

    return 0;
}


