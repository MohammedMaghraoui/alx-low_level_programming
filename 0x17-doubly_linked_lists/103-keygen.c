#include <stdio.h>
#include <string.h>

void generate_key(const char *username) {
    int i, key = 0;

    // Sum the ASCII values of characters in the username
    for (i = 0; i < strlen(username); i++) {
        key += username[i];
    }

    printf("Generated Key: %d\n", key);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <username>\n", argv[0]);
        return 1;
    }

    generate_key(argv[1]);

    return 0;
}
