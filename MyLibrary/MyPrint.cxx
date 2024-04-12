#include <stdio.h>

namespace mylibrary {
void my_print(const char *input) {
    // Inserts a # between every character
    while (*input != '\0') {
        printf("#%c", *input);
        input++;
    }
    printf("#\n");
}
}  // namespace mylibrary
