#include<stdio.h>
int main()
{
    int mark;

    printf("Enter the mark (0 to 100): ");
    scanf("%d", &mark);

    if (mark < 0 || mark > 100)
     {
        printf("Invalid mark\n");
    } else if (mark >= 90) 
    {
        printf("O\n");
    } else if (mark >= 80) 
    {
        printf("A+\n");
    } else if (mark >= 70) 
    {
        printf("A\n");
    } else if (mark >= 60) 
    {
        printf("B\n");
    } else if (mark >= 50) 
    {
        printf("C\n");
    } else 
    {
        printf("Fail\n");
    }
    return 0;
    
}
    