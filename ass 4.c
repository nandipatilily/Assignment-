#include<stdio.h>
int main()
{
    float order_amount, discount = 0, delivery_charge = 0, final_amount;
    int membership_type; 

    printf("Enter order amount: ");
    scanf("%f", &order_amount);
    printf("Enter membership type (1 for Premium, 0 for Regular): ");
    scanf("%d", &membership_type);

    if (order_amount >= 500)
     {
        delivery_charge = 0;
        if (membership_type == 1)
         {
            discount = 0.10 * order_amount;
             
        }
    } else 
    {
        delivery_charge = 50; 
        
    }

    final_amount = order_amount - discount + delivery_charge;
    printf("The payable amount is: %.2f\n", final_amount);
    return 0;
    
}
    