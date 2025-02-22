#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* generatepass(int var_1, int var_2, char* charArray) {
    char *encpass = "=0#5/<5/4>3.";
    char password[12];
    password[12] = '\0';
    for (int i = 0; i < strlen(encpass); i++ ) {
        password[i] = encpass[i] ^ 0x5a;
    }
    int len = strlen(password);
    char *encrypted = malloc(len + 1); 
    for (int i = 0; i < len; i++) {
        encrypted[i] = password[i] ^ var_1; 
        encrypted[i] = encrypted[i] + var_2;
    }
    encrypted[len] = '\0'; 
    return encrypted; 
}
int main()
{
    char *real_password = "thisistherealpasswordyoubloke";
    char enteredPassword[64];
    printf("Enter your password: ");
    scanf("%63s", enteredPassword);
    char *pewpewpew = generatepass(1, 2, "hello");
    if (strlen(enteredPassword) == 12) 
    {
        if (enteredPassword[0] == (pewpewpew[0] ^ 4))
        {
            if (enteredPassword[1] == (pewpewpew[1] ^ 2))
            {
                if (enteredPassword[2] == (pewpewpew[2] ^ 22))
                {
                    if (enteredPassword[3] == (pewpewpew[3] ^ 20))
                    {
                        if (enteredPassword[4] == (pewpewpew[4] ^ 31))
                        {
                            if (enteredPassword[5] == (pewpewpew[5] ^ 13))
                            {
                                if (enteredPassword[6] == (pewpewpew[6] ^ 5))
                                {
                                    if (enteredPassword[7] == (pewpewpew[7] ^ 19))
                                    {
                                        if (enteredPassword[8] == (pewpewpew[8] ^ 31))
                                        {
                                            if (enteredPassword[9] == (pewpewpew[9] ^ 13))
                                            {
                                                if (enteredPassword[10] == (pewpewpew[10] ^ 5))
                                                {
                                                    if (enteredPassword[11] == (pewpewpew[11] ^ 14))
                                                    {
                                                        printf("Access granted!\n");
                                                    }
                                                    else
                                                    {
                                                        printf("Incorrect password.\n");
                                                    }
                                                }
                                                else
                                                {
                                                    printf("Incorrect password.\n");
                                                }
                                            }
                                            else
                                            {
                                                printf("Incorrect password.\n");
                                            }
                                        }
                                        else
                                        {
                                            printf("Incorrect password.\n");
                                        }
                                    }
                                    else
                                    {
                                        printf("Incorrect password.\n");
                                    }
                                }
                                else
                                {
                                    printf("Incorrect password.\n");
                                }
                            }
                            else
                            {
                                printf("Incorrect password.\n");
                            }
                        }
                        else
                        {
                            printf("Incorrect password.\n");
                        }
                    }
                    else
                    {
                        printf("Incorrect password.\n");
                    }
                }
                else
                {
                    printf("Incorrect password.\n");
                }
            }
            else
            {
                printf("Incorrect password.\n");
            }
        }
        else
        {
            printf("Incorrect password.\n");
        }
    } else {
        printf("Are you even trying to learn RE??");
    }
    free(pewpewpew);
    return 0;
}
