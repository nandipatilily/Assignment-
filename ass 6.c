#include<stdio.h>
int main()
{
    int user_id, password;
    int stored_id = 101;
    int stored_password = 4321;

    printf("Enter User ID: ");
    scanf("%d", &user_id);

    if (user_id != stored_id)
     {
        printf("User not found\n");
    } else 
    {
        printf("Enter Password: ");
        scanf("%d", &password);

        if (password == stored_password) 
        {
            printf("Login successful\n");
        } else
         {
            printf("Incorrect password\n");
        }
    }
    return 0;
    
}
    