#include <stdio.h>

int main()  {
    
    char text[200]; //message that will be taken
    int menuOption; //the options at the initial menu
    int shiftKey; //the key that the text will be incremented by
    
    
    printf("Enter your message: "); 
    scanf("%s", text); //receiving the message
    printf("%s\n\n", text);
    
    printf("Please select a number from the following options:\n");
    printf("1 - Caesar Cipher Encryption\n\n");
    scanf("%d", &menuOption);
    
    switch (menuOption) {
        case 1: //Caesar Cipher Encryption
            printf("Enter your key: ");
            scanf("%d", &shiftKey); //receiving the key
            printf("%d\n", shiftKey);
            
            break;
            
        default :
            printf("Invalid menu option.");
    }
    
    
  return 0;
}
