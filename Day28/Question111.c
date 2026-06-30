#include <stdio.h>

int main()
{
    int seats = 10;
    int choice, tickets;

    do
    {
        printf("\n===== Ticket Booking =====");
        printf("\nAvailable Seats : %d", seats);
        printf("\n1. Book Ticket");
        printf("\n2. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Number of Tickets: ");
                scanf("%d", &tickets);

                if(tickets <= seats)
                {
                    seats -= tickets;
                    printf("Booking Successful!\n");
                    printf("Remaining Seats: %d\n", seats);
                }
                else
                {
                    printf("Not Enough Seats Available!\n");
                }
                break;

            case 2:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 2);

    return 0;
}