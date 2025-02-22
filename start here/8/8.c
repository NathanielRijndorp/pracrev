#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


int *somefunstuffyoulearnatschool(int keys) {
    int *fib = malloc(keys * sizeof(int));
    fib[0] = 0, fib[1] = 1;
    for (int i = 2; i < keys; i++) fib[i] = fib[i - 1] + fib[i - 2];
    return fib;
}

char *scramble(char *toScramble) {
    int len = strlen(toScramble);
    int *foolish = somefunstuffyoulearnatschool(8);
    char *encrypted = malloc(len + 1);
    encrypted[len] = '\0';
    for (int i = 0; i < len; i++) {
        encrypted[i] = ((((toScramble[i] + 1) << 2) ^ 0x5) ^ (foolish[i % len] & 0xFF) - foolish[i % len]);
    }
    free(foolish);
    return encrypted;
}

int main() {
    char input[64];
    printf("well.. you're testing the grand magus??\n");
    sleep(2);
    printf("very well.. decrypt the text file.. and we shall meet at the next challenge!\n");
    scanf("%63s", input);
    char *scrambled = scramble(input);
    printf("magic box: %s\n", scrambled);
    free(scrambled);
    return 0;
}
