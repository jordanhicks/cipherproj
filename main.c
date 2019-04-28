#include <stdio.h>
#include <string.h>

int main()  {
    
    char text[200]; //message that will be taken
    int menuOption; //the options at the initial menu
    int shiftkey; //the key that the caesar cipher will be incremented by
    char subkey[200] = "QWERTYUIOPASDFGHJKLZXCVBNM"; //the key that each letter will be replaced with in a substitution cipher
    char regkey[200] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //regular alphabet key
    char caesar; //encrypted caesar text
    char sub; //encrypted substitution text
    int i; //letter value
    int j; //substitution letters
    
    printf("Enter your message: "); 
    scanf("%s", text); //receiving the message
    printf("%s\n\n", text);
    
    printf("Please select a number from the following options:\n");
    printf("1 - Caesar Cipher Encryption\n2 - Caesar Cipher Decryption\n3 - Substitution Cipher Encryption\n4 - Substitution Cipher Decryption\n\n");
    scanf("%d", &menuOption);
    
    switch (menuOption) {
        case 1: //Caesar Cipher Encryption
            printf("You have chosen Caesar Cipher Encryption.\n\nEnter your key: ");
            scanf("%d", &shiftkey); //receiving the key
            printf("%d\n", shiftkey);
            
            for(i=0; text[i] != '\0'; ++i){
                caesar = text[i]; //make encrypted text the same as our input text
                
                if (caesar >= 'A' && caesar <= 'Z'){
                    caesar = caesar + shiftkey; //adding the key to the text
                    
                    if(caesar > 'Z'){
                        caesar = caesar - 65; //from ASCII value                       
                    }
                
                text[i] = caesar;
                
                }
            }
            
            printf("The encrypted text is: %s", text);
            break;
        
        
        case 2: //Caesar Cipher Decryption
            printf("You have chosen Caesar Cipher Decryption.\n\nEnter your key: ");
            scanf("%d", &shiftkey); //receiving the key
            printf("%d\n", shiftkey);
            
            char caesar; //encrypted text
            int i; //letter value
            
            for(i=0; text[i] != '\0'; ++i){
                caesar = text[i]; //make encrypted text the same as our input text
                
                if (caesar >= 'A' && caesar <= 'Z'){
                    caesar = caesar - shiftkey; //adding the key to the text
                    
                    if(caesar > 'Z'){
                        caesar = caesar - 65; //from ASCII value                       
                    }
                
                text[i] = caesar; //apply encrypted text as output text
                
                }
            }
            
            printf("The decrypted text is: %s", text);
            break;
            
        
        case 3: //substitution cipher encryption
            printf("You have chosen Substitution Cipher Encryption.\n\n");
            printf("By default the key is based off the QWERTY alphabet.\n\n");
            
            for (i=0; text[i] != '\0'; ++i){	    
	            sub = text[i]; //make encrypted text the same as input text
	    
	            if (sub >= 'A' && sub <= 'Z'){
	                j = sub - 65; //deduct ascii value 
	                sub = subkey[j]; //initialise the key
	            }
	            text[i] = sub; //apply encrypted text as output text
	        }	
	        printf("Encrypted text: %s", text);
            break;
                
        
        case 4: //substitution cipher decryption
            printf("You have chosen Substitution Cipher Decryption.\n\n");
            printf("By default the key is based off the QWERTY alphabet.\n\n");
            
            for (i=0; text[i] != '\0'; ++i){
                sub = text[i]; //make decrypted text same as the input text
                
                if (sub >= 'A' && sub <= 'Z'){
                    j = sub - 65; //deduct ascii value
                    text[i] = regkey[j]; //initialise key to revert to standard alphabet
                }
                text[i] = sub; //apply decrypted text as output text
            }
            printf("Decrypted text: %s", text);
            break;
        
        
        default :
            printf("Invalid menu option.");
    }
    
    
  return 0;
}