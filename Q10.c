// #include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Comparator function for qsort
int compareNames(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char nameOfStudents[10][50];
    int numStudents;

    printf("Enter the number of students (up to 10): ");
    scanf("%d", &numStudents);

    if (numStudents > 10) {
        printf("Maximum number of students allowed is 10.\n");
        return 1;
    }

    printf("Enter %d student names:\n", numStudents);
    for (int i = 0; i < numStudents; ++i) {
        scanf("%s", nameOfStudents[i]);
    }

    // Sort the array of names
    qsort(nameOfStudents, numStudents, sizeof(char[50]), compareNames);

    printf("\nSorted student names:\n");
    for (int i = 0; i < numStudents; ++i) {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}
