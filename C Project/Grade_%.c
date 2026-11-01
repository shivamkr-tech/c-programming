/*Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade according to following:
Percentage > 90% : Grade A
Percentage > 80% : Grade B
Percentage > 70% : Grade C
Percentage > 60% : Grade D
Percentage > 40% : Grade E
Percentage < 40% : Grade F*/

#include <stdio.h>

int main()
{
    int phy, chem, bio, maths, comp;
    float percentage = 0.0, total_marks = 0.0;
    char grade;

    // Input of marks from User.
    printf("Enter the marks of Physics:\n");
    scanf("%d", &phy);

    printf("Enter the marks of Chemistry:\n");
    scanf("%d", &chem);

    printf("Enter the marks of Biology:\n");
    scanf("%d", &bio);

    printf("Enter the marks of Mathematics:\n");
    scanf("%d", &maths);

    printf("Enter the marks of Computer:\n");
    scanf("%d", &comp);

    // Calculate Total Marks Obtained out of 500
    total_marks=phy+chem+bio+maths+comp;

    // Calculate Percentage Obtained

    percentage = (total_marks / 500.0) * 100;

    // Assing Grade according to percentage.
    
  

    if (percentage <= 100 && percentage >= 90)
    {
        grade = 'A';
    }

   else if (percentage >= 80)
    {
        grade = 'B';
    }

   else if (percentage >= 70)
    {
        grade = 'C';
    }

   else if ( percentage >= 60)
    {
        grade = 'D';
    }

   else if (percentage >= 40)
    {
        grade = 'E';
    }

   else
    {
        grade = 'F';
    }
      if(phy > 100 || chem > 100 || bio > 100 ||
    maths > 100 || comp > 100 ||
    phy < 0 || chem < 0 || bio < 0 ||
    maths < 0 || comp < 0){
        printf("Are You Mad!!!");
    }
    
    else{
        printf("Your Marks in:\n Physics = %d\n Chemistry = %d\n Biology = %d\n Mathematics = %d\n Computer = %d\n",phy,chem,bio,maths,comp);
    
    
    printf("Total Marks Obtained : %.0f/500 \n",total_marks);
    printf ("Your Percentage :%.2f\n", percentage);
    printf("Your Grade is:%c\n",grade);
}
    return 0;
}
