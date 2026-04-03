#include<stdio.h>

int main(){

    float s1,s2,s3,s4,s5,sum,percentage;
    printf("Enter the marks of 5 subjects :-");
    scanf("%f %f %f %f %f", &s1,&s2,&s3,&s4,&s5);

    sum = s1+s2+s3+s4+s5;
    percentage = sum/5;
    printf("Total marks obtained is %f and percentage is %f", sum, percentage);





    return 0;

}












 
