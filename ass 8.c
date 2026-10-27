#include<stdio.h>
int main()
{
    float weight, height, bmi;

    printf("Enter weight in kg: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);
    printf("BMI value: %.2f\n", bmi);

    if (bmi < 18.5)
     {
        printf("Underweight\n");
    } else if (bmi < 25.0)
     {
        printf("Normal\n");
    } else if (bmi < 30.0)
     {
        printf("Overweight\n");
    } else 
    {
        printf("Obese\n");
    }
    return 0;
}
    