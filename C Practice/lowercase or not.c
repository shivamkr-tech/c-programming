/*Write a program to determine whether a character entered by the user is lowercase or
not.*/


#include <stdio.h>

int main(){
    char ch;
    // ASCII Value 
    
    // A-Z => 65-90
    
    // a-z => 97-122
    printf("Enter The character:\n");
    scanf("%c",&ch);
    
    printf("The Character is  %c\n", ch);
    printf("The character is %d\n", ch);
    
    if(ch>= 97 && ch<=122){
        printf("The Character is Lowercase.");
    }
    
    else{
        printf("The character is Uppercse.");
    }
    
    return 0;
}
