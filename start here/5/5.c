#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* generatepass() {
    char original[] = "didyouthinkthatitwouldbethateasy?";
    int len = strlen(original);
    char *encrypted = (char *)malloc(len + 1); 
    
    if (!encrypted) {
        return NULL;
    }

    for (int i = 0; i < len; i++) {
        encrypted[i] = (original[i] + 2) ^ 0xaa;
    }
    encrypted[len] = '\0'; 

    return encrypted;
}

int main() {
    char *real_password = "thisistherealpasswordyoubloke";
    char enteredPassword[64];

    printf("Enter your password: ");
    scanf("%63s", enteredPassword);

    char *pewpewpew = generatepass();

    printf("some string %s\n", pewpewpew); 

    if (strcmp(enteredPassword, pewpewpew) != 0) {
        printf("Access denied.\n");
    } else {
        printf("Access granted.\n");
    }

    free(pewpewpew);
    return 0;
}
