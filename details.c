#include <stdio.h>
#include <string.h>

int main() {
    char userId[] = "admin";          
    char password[] = "admin@1234";   

    char inputId[20];
    char inputPass[20];

    printf("Enter User ID: ");
    scanf("%s", inputId);

    printf("Enter Password: ");
    scanf("%s", inputPass);

    
    if (strlen(inputPass) <= 8) {
        printf("Password must be more than 8 characters\n");
    }
    
    else if (strcmp(userId, inputId) == 0 &&
             strcmp(password, inputPass) == 0) {
        printf("Login Successful\n");
    }
    else {
        printf("Invalid User ID or Password\n");
    }

    return 0;
}