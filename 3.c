// Code for per of 3 sub
#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Marks for English");
    scanf("%f", &a);

    printf("Marks for Maths");
    scanf("%f", &b);
     
    printf("Marks for Marathi");
    scanf("%f", &c);

    float sum;
    sum = a+b+c;

    float per= (sum/150)*100;
    printf("Total Per is %f", per);
}