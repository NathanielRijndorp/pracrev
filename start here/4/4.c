#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* whatthefuck() {
    return "gofuckurself";
}
char* randomizer() {
    return "wellthisis";
}
char* ahheeeoooo() {
    return "whynotbrother";
}
char* geeaaaaaaggg() {
    return "nottomention";
}
char* letsgoaaaaaaaafg() {
    return "findtheone";
}
char* nopeaaaaaaae() {
    return "outofthemall";
}
char* heeeeeeeeeeaa() {
    return "yourstruly";
}
char* watggggggggtab() {
    return "selfinsertaction";
}
char* teeeeeesting() {
    return "asiadoesnotseemsmall";
}
char* areeeeeeech() {
    return "iwanttoeatafrica";
}
char* thatsabsolutelybonkersbrother() {
    return "northeasteurope";
}
char* crazythatyouwouldsaythis() {
    return "andthatsit";
}
char* browhatareyousaying() {
    return "southeastasian";
}

int main()
{
    char *correctPassword = whatthefuck();
    char *test1 = randomizer();
    char *test2 = ahheeeoooo();
    char *test3 = geeaaaaaaggg();
    char *test4 = letsgoaaaaaaaafg();
    char *test5 = nopeaaaaaaae();
    char *test6 = heeeeeeeeeeaa();
    char *test7 = watggggggggtab();
    char *test8 = teeeeeesting();
    char *test9 = areeeeeeech();
    char *test10 = thatsabsolutelybonkersbrother();
    char *test11 = crazythatyouwouldsaythis();
    char *test12 = browhatareyousaying();
    char enteredPassword[64];
    printf("Enter your password: ");
    scanf("%63s", enteredPassword);

    if (strlen(enteredPassword) == 12) 
    {
        if (enteredPassword[0] == 'g')
        {
            if (enteredPassword[1] == 'o')
            {
                if (enteredPassword[2] == 'f')
                {
                    if (enteredPassword[3] == 'u')
                    {
                        if (enteredPassword[4] == 'c')
                        {
                            if (enteredPassword[5] == 'k')
                            {
                                if (enteredPassword[6] == 'u')
                                {
                                    if (enteredPassword[7] == 'r')
                                    {
                                        if (enteredPassword[8] == 's')
                                        {
                                            if (enteredPassword[9] == 'e')
                                            {
                                                if (enteredPassword[10] == 'l')
                                                {
                                                    if (enteredPassword[11] == 'f') 
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
    }
    return 0;
}
