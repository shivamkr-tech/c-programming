// Write a Programe to find largest of Two Numbers

#include <stdio.h>

int main(){
    int a,b;
    printf("Enter The No. a \n",a);
    scanf("%d",&a);
    
    printf("Enter The No. b \n", b);
    scanf("%d", &b);
    
    if(a>b){
        printf("a is The Largest No.");
    }
    else {
        printf("b is the Largest No.");
    }
    return 0;
}