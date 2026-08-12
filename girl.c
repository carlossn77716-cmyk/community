#include <stdio.h>
#include <string.h>

int main() {
    char answer[10];
    
    printf("Initializing heart connection...\n");
    printf("Will you be my Valentine? (yes/no): ");
    
    // Read user input string
    scanf("%s", answer);
    
    // Check the response
    if (strcmp(answer, "yes") == 0 || strcmp(answer, "YES") == 0) {
        printf("\n ❤️ Success! Code compiled with infinite love. ❤️ \n");
    } else {
        printf("\n Error 404: Heart not found. Please re-run and type yes! \n");
    }
    
    return 0;
}
