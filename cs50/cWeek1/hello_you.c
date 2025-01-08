// This is a program where: it asks users name, then type it
#include <stdio.h>

int main(void) 
{
    char name[50];  // Creates a buffer to store the name
    printf("What is your name? ");
    scanf("%s", name);  // Note: this only reads until the first space
    // For full line including spaces, use: fgets(name, 50, stdin);
    
    printf("Hello, %s\n", name);
    return 0;
}