#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    float D,x1,x2;
    
    printf("Enter the coff. of x^2,x and constant.\n");
    scanf("%d%d%d", &a ,&b, &c);
    
    D = b*b - 4*a*c;
    
    if(D>0){
        x1 = (-b+ sqrt(D))/2*a;
        x2 = (-b- sqrt(D))/2*a;
        
        printf("The Quadratic eq id (%d)x^2 + (%d)x + (%d).\n",a,b,c);
        printf("Have real roots.\n");
        printf("Root 1 : %.2f\n", x1);
        printf("Root 2 : %.2f\n", x2);
    }
    
    
    else if(D=0){
         x1 = (-b)/2*a;
        x2 = (-b)/2*a;
        
        
         printf("The Quadratic eq id (%d)x^2 + (%d)x + (%d)\n.",
         a,b,c);
         printf("Have real and eqaul roots.\n");
        printf("Root 1 : %.2f\n", x1);
        printf("Root 2 : %.2f\n", x2);
    }
    
    
    else{
        printf("This eq have imaginary roots.\n");
    }
    return 0;
}
