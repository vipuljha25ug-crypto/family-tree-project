
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person {
    char name[50];
    int age;
    struct Person *father;
    struct Person *mother;
} Person;

Person* create_person(const char *name, int age) {
    Person *p = malloc(sizeof(Person));

    if (p == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    snprintf(p->name, sizeof(p->name), "%s", name);
    p->age = age;
    p->father = NULL;
    p->mother = NULL;

    return p;
}

void read_person_info(const char *role, char *name_out, int *age_out) {
    printf("Enter name for %s: ", role);

    if (fgets(name_out, 50, stdin) == NULL) {
        printf("Input error.\n");
        exit(EXIT_FAILURE);
    }

    name_out[strcspn(name_out, "\n")] = '\0';

    printf("Enter age for %s: ", role);

    if (scanf("%d", age_out) != 1 || *age_out < 0) {
        printf("Invalid age.\n");
        exit(EXIT_FAILURE);
    }

    getchar(); /* Consume the newline after the age. */
}

int main(void) {
    char name[50];
    int age;

    Person *people[7];
    const char *roles[7] = {
        "Paternal Grandfather",
        "Paternal Grandmother",
        "Maternal Grandfather",
        "Maternal Grandmother",
        "Father",
        "Mother",
        "Yourself"
    };

    for (int i = 0; i < 7; i++) {
        read_person_info(roles[i], name, &age);
        people[i] = create_person(name, age);
        printf("Saved: %s, age %d\n\n", people[i]->name, people[i]->age);
    }

    printf("All seven family members have been recorded!\n");

    for (int i = 0; i < 7; i++) {
        free(people[i]);
    }

    return 0;
}

