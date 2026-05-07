#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

char* password_letters(int length) {
    char set[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    int charset_size = strlen(set);

    char *password = malloc(length + 1);
    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        int r = rand() % charset_size;
        password[i] = set[r];
    }

    password[length] = '\0';
    return password;
}

char* password_letters_numbers(int length) {
    char set[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890";
    int charset_size = strlen(set);

    char *password = malloc(length + 1);
    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        int r = rand() % charset_size;
        password[i] = set[r];
    }

    password[length] = '\0';
    return password;
}

char* password_all(int length) {
    char set[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890!@#$%^&*()";
    int charset_size = strlen(set);

    char *password = malloc(length + 1);
    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        int r = rand() % charset_size;
        password[i] = set[r];
    }

    password[length] = '\0';
    return password;
}


int main() {
    int choice;
    int length;
    char *password;

    while(1) {
        printf("=== PASSWORD GENERATOR ===\n\n");
        printf("1. Letters Only\n");
        printf("2. Letters & Numbers\n");
        printf("3. Letters, Numbers & Symbols\n");
        printf("4. Exit\n\n");

        if (scanf("%i", &choice) != 1) {
            while (getchar() != '\n');
            printf("ERROR!\n\n");
            continue;
        }

        switch (choice) {
            case 1:
                printf("Length: ");
                scanf("%i", &length);
                
                password = password_letters(length);
                printf("Password: %s\n", password);
                free(password);
                break;
            case 2:
                printf("Length: ");
                scanf("%i", &length);
                
                password = password_letters_numbers(length);
                printf("Password: %s\n", password);
                free(password);
                break;
            case 3:
                printf("Length: ");
                scanf("%i", &length);
                
                password = password_all(length);
                printf("Password: %s\n", password);
                free(password);
                break;
            case 4:
                printf("GOODBYE!!\n");  
                return 0;
            
            default:
                printf("ERROR!!\n");
                break;
        }
    }

    return 0;
}