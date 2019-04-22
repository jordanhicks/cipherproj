#include <stdio.h>

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
            
            char caesar; //encrypted text
            int i; //letter value
            
            for(i=0; text[i] != '\0'; ++i){
                caesar = text[i]; //make encrypted text the same as our input text
                
                if (caesar >= 'A' && caesar <= 'Z'){
                    caesar = caesar + key; //adding the key to the text
                    
                    if(caesar > 'Z'){
                        caesar = caesar - 65; //from ASCII value                       
                    }
                
                text[i] = caesar;
                
                }
            }
            
            printf("The encrypted text is: %s", text);
            break;
        
        case 2: //Caesar Cipher Decryption
        
        default :
            printf("Invalid menu option.");
    }
    
    
  return 0;
}