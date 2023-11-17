#include "main.h"

/**
 * rot13 - Performs rot13 substitution on a string
 * @str: The input string to be rot13'ed
 *
 * Return: A dynamically-allocated rot13'ed string
 */

char *rot13(const char *str) {
    char *result = strdup(str);
    if (result == NULL) {
        return NULL;
    }

    for (int i = 0; result[i] != '\0'; i++) {
        if (result[i] >= 'a' && result[i] <= 'z') {
            if (result[i] > 'm') {
                result[i] -= 13;
            } else {
                result[i] += 13;
            }
        } else if (result[i] >= 'A' && result[i] <= 'Z') {
            if (result[i] > 'M') {
                result[i] -= 13;
            } else {
                result[i] += 13;
            }
        }
    }
    return (result);
}
