#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {
    srand(time(NULL));
    char snum[4];        
    int r = 0;
    while (r < 99) {     
        r = rand() % 999;
    }
    itoa(r, snum, 10);   
    char correctPassword[4]; 
    strcpy(correctPassword, snum);
    char enteredPassword[64]; 
    printf("Enter your pin: ");
    scanf("%63s", enteredPassword);  
    if (strcmp(enteredPassword, correctPassword) == 0) {
        printf("Access granted!\n");
    } else {
        printf("Incorrect pin.\n");
    }
    return 0;
}
