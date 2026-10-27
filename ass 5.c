#include<stdio.h>
int main()
{
    int age, credit_score;
    float monthly_income;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 21 || age > 60)
     {
        printf("Loan rejected: age not in 21 to 60\n");
    } else 
    {
        printf("Enter monthly income: ");
        scanf("%f", &monthly_income);

        if (monthly_income < 25000) 
        {
            printf("Loan rejected: income below 25,000\n");
        } else
         {
            printf("Enter credit score: ");
            scanf("%d", &credit_score);

            if (credit_score < 700) 
            {
                printf("Loan rejected: credit score below 700\n");
            } else 
            {
                printf("Loan approved\n");
            }
        }
    }
    return 0;
    
}
    