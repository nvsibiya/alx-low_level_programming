#include "main.h"
#include <stdlib.h>

int is_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str) {
    int count = 0;
    int in_word = 0;

    while (*str) {
        if (is_space(*str)) {
            in_word = 0;
        } else if (!in_word) {
            count++;
            in_word = 1;
        }
        str++;
    }

    return count;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = count_words(str);
    if (num_words == 0) {
        return NULL;
    }

    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    int word_len = 0;
    int in_word = 0;
    int word_count = 0;

    while (*str) {
        if (is_space(*str)) {
            if (in_word) {
                word_len++;
            }
            in_word = 0;
        } else {
            if (!in_word) {
                words[word_count] = (char *)malloc((word_len + 1) * sizeof(char));
                if (words[word_count] == NULL) {
                    // Free previously allocated memory
                    for (int i = 0; i < word_count; i++) {
                        free(words[i]);
                    }
                    free(words);
                    return NULL;
                }
                word_len = 0;
                word_count++;
            }
            words[word_count - 1][word_len] = *str;
            word_len++;
            in_word = 1;
        }
        str++;
    }

    if (in_word) {
        words[word_count] = (char *)malloc((word_len + 1) * sizeof(char));
        if (words[word_count] == NULL) {
            // Free previously allocated memory
            for (int i = 0; i <= word_count; i++) {
                free(words[i]);
            }
            free(words);
            return NULL;
        }
    }

    // Null-terminate the array of words
    words[num_words] = NULL;

    return words;
}
