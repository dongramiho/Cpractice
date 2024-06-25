#include <stdio.h>
#include <ctype.h>

int word_count(char string[]) {
    int count = 0, i = 0, has_alpha = 0;

    while (string[i] != '\0') {
        if (isalpha(string[i])) {
            has_alpha = 1;
        }

        if (string[i] == ' ' || string[i] == '\n') {
            if (has_alpha) {
                count++;
            }
            has_alpha = 0;
        }
        i++;
    }

    if (has_alpha) {
        count++;
    }

    return count;
}

void main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    printf("Number words: %d\n", word_count(inputString));
}