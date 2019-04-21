#include <stdio.h>

void CaesarEncryption(char,int);

int main()  {
    
    char text[200]; //message that will be taken
    int menuOption; //the options at the initial menu
    int key; //the key that the text will be incremented by    
    
    printf("Enter your message: "); 
    scanf("%s", text); //receiving the message
    printf("%s\n\n", text);
    
    printf("Please select a number from the following options:\n");
    printf("1 - Caesar Cipher Encryption\n2 - Caesar Cipher Decryption\n\n");
    scanf("%d", &menuOption);
    
    switch (menuOption) {
        case 1: //Caesar Cipher Encryption
            printf("Enter your key: ");
            scanf("%d", &key); //receiving the key
            printf("%d\n", key);
            
            printf("The encrypted text is: ");
            CaesarEncryption(text,key);
            break;
            
        default :
            printf("Invalid menu option.");
    }
    
    
  return 0;
}

void CaesarEncryption(char,int) { //function for finding Caesar Cypher
    
    int i=0;
    int cipherValue;
    char cipher;
    
    while(text[i] != '\0' && strlen(text)-1 > i){
        cipherValue = ((int)text - 65 + key) % 26 + 65;
        cipher = (char)(cipherValue)
        printf("%s", cipher)
    }
        
}
