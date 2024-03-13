#include <stdio.h>
#include <ctype.h> // For tolower()

int main() {
    char input[100];
    int alphabet_counts[26] = {0}; // Initialize counts for each alphabet

    printf("Enter a string: ");
    scanf("%[^\n]", input); // Read the entire line (including spaces)

    // Convert the string to lowercase for case-insensitive comparison
    for (int i = 0; input[i]; i++) {
        input[i] = tolower(input[i]);
    }

    // Count occurrences of each alphabet
    for (int i = 0; input[i]; i++) {
        if (isalpha(input[i])) { // Check if the character is an alphabet
            int index = input[i] - 'a'; // Convert character to index (0-25)
            alphabet_counts[index]++;
        }
    }

    // Display the counts
    for (int i = 0; i < 26; i++) {
        if (alphabet_counts[i] > 0) {
            printf("%c : %d\n", 'A' + i, alphabet_counts[i]);
        }
    }

    return 0;
}
