#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *scramble(char* toScramble) {
    char *foolish = "tryreversingthis!";
    int len = strlen(toScramble);
    char *scramble_1 = malloc(len + 1); 
    scramble_1[len] = '\0'; 
    char *scramble_2 = malloc(len + 1); 
    scramble_2[len] = '\0'; 
    char *scramble_3 = malloc(len + 1); 
    scramble_3[len] = '\0'; 
    char *encrypted = malloc(len + 1); 
    encrypted[len] = '\0'; 
    for (int i = 0; i < len; i++) {
        scramble_1[i] = toScramble[i] + 7;
    }
    for (int i = 0; i < len; i++) {
        scramble_2[i] = scramble_1[i] << 5;
    }
    for (int i = 0; i < len; i++) {
        scramble_3[i] = scramble_2[i] ^ 0x41;
    }
    for (int i = 0; i < len; i++) {
        encrypted[i] = scramble_3[i] ^ foolish[i % strlen(foolish)];
    }
    return encrypted;
}

int main() {
    char mystery[64];
    printf("input something, and you might just get the flag!\n");
    scanf("%63s", mystery); 
    char *scrambled = scramble(mystery);
    printf("hmm, are you sure about this? \n%s", scrambled);
    free(scrambled);
    return 0;
}