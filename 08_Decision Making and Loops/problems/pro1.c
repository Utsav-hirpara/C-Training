// Write a program to check whether a character is a vowel or consonant using conditional statements
 
 #include <stdio.h>

 int main(void)
 {
    char i;
    printf("Enter a alphbet : ");
    scanf("%c", &i);

    if( i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U' || i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
    {
        printf("Vowel\n");
    }
    else if (i >= 0 && i <= 47 || i >= 58 && i <= 64 || i >= 91 && i <= 96)
    {
        printf("Special\n");
    }
    else 
    {
        printf("Consonant\n");
    }
    
    
    
 
    return 0;
 } 