#include <stdio.h>

int main()  {
    
    char text[200]; //message that will be taken
    int key; //the shiftkey
    
    printf("Enter your text: ");
    scanf("%s", text);
    printf("%s\n", text);
    
    printf("Enter your key: ");
    scanf("%d", &key);
    printf("%d\n", key);
    
    
  return 0;
}
