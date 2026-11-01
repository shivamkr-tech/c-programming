//Write a C program to input any alphabet and check whether it is vowel or consonant.

#include <stdio.h>

int main(){
   char alph ;
   printf("Enter the your Alphabet:\n");
   scanf("%c", &alph);
   
   if(alph=='a' || alph=='e' || alph== 'i' || alph=='o' || alph=='u' ||alph=='A' || alph=='E' || alph== 'I' || alph=='O' || alph=='U')
   {
       printf("%c alphabet is vowel.",alph);
   }
   
   else{
       printf("%c alphabet is consonant ",alph);
   }
    
    return 0;
}