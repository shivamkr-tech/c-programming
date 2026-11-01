// Write a C program to  Check Whether a Number is Negative, Positive, or Zero.

#include <stdio.h>

int main(){
   int num;
   printf("Enter the no. :\n");
   scanf("%d", &num);
   
   if(num>0)
   {
       printf("%d is the positive no. .",num);
   }
   
   else if(num==0){
       printf("Your No. is zero.",num);
   }
   else{
       printf("%d is the negative no.",num);
   }
    
    return 0;
}