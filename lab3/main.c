#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_a_number(char character) {
    return (character >= '0' && character <= '9');
}

int change_character_case(char *s) {
    int counter = 0;
    while (s[counter] != '\0') {
        if (s[counter] >= 'A' && s[counter] <= 'Z') {
            s[counter] = s[counter] + 32;
        } else if (s[counter] >= 'a' && s[counter] <= 'z') {
            s[counter] = s[counter] - 32;
        }
        counter++;
    }
    return 0;
}


