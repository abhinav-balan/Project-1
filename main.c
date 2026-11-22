
#include <stdio.h>

int main()
{
    int choice;

    do
    {
        printf("\n============================================\n");
        printf("       MAHARASHTRA BUS TICKET BOOKING\n");
        printf("============================================\n");

        printf("\n1. Passenger Registration");
        printf("\n2. Search Available Buses");
        printf("\n3. Book Bus Tickets");
        printf("\n4. View My Bookings");
        printf("\n5. Cancel Ticket");
        printf("\n6. Check Seat Availability");
        printf("\n7. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nPassenger Registration Selected.\n");
                break;

            case 2:
                printf("\nSearch Available Buses Selected.\n");
                break;

            case 3:
                printf("\nBus Ticket Booking Selected.\n");
                break;

            case 4:
                printf("\nView My Bookings Selected.\n");
                break;

            case 5:
                printf("\nTicket Cancellation Selected.\n");
                break;

            case 6:
                printf("\nSeat Availability Selected.\n");
                break;

            case 7:
                printf("\nThank you for using Maharashtra Bus Booking System!\n");
                break;

            default:
                printf("\nInvalid choice! Please select between 1 and 7.\n");
        }

    } while(choice != 7);
    
    return 0;
}
