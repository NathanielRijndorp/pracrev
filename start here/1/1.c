#include <stdio.h>
#include <string.h>

int main() {
    char correctPassword[] = "password"; 
    char enteredPassword[20]; 
    printf("Enter your password: ");
    scanf("%s", enteredPassword);

    if (strcmp(enteredPassword, correctPassword) == 0) {
        printf("Access granted!\n");
    } else {
        printf("Incorrect password.\n");
    }
    return 0;
}