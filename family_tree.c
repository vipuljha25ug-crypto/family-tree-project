
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

int main(void) {
    Person *test = create_person("Vipul", 20);

    printf("Name: %s\n", test->name);
    printf("Age: %d\n", test->age);

    free(test);
    return 0;
}
