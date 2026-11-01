// Area Of circle

#include <stdio.h>

int main(){
    int r;
    printf("Enter The Radius\n");
    scanf("%d",&r);
    
    printf("The Area Of the Circle is %f",r, 3.14*r*r);
    return 0;
}


// Area of rectangle

#include <stdio.h>

int main(){
    int length , breadth;
    
    printf("Enter length\n");
    scanf("%d", &length);
    
    printf("Enter breadth\n");
    scanf("%d", &breadth);
    
    printf("The Area of Rectangle is %d", length*breadth);
    
    return 0;
    
}
