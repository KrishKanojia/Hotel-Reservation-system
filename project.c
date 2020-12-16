#include <stdio.h>
#include <string.h>
#include <process.h>
#include <conio.h>
int room_no[5] = {1, 2, 3, 4, 5};
char room_type[5][8];
int room_charge[5];
char room_cust[5][20] = {"N.A", "N.A", "N.A", "N.A", "N.A"};
char room_avail[5];
int room_per[5];
char cust_nat[5][50];
char cust_city[5][20];
int mem[5];
int no[5];
int year[5];
int room;
int month[5];
int day[5];
char name[30];
int g_tot = 0;
int advance[5] = {500, 1000, 600, 400, 1250};
int tot[5] = {0, 0, 0, 0, 0};
void headline()
{

    printf("\n                          *************************************************                 ");
    printf("\n                          * ********************************************* *                 ");
    printf("\n                          * *                                           * * ");
    printf("\n                          * *                                           * * ");
    printf("\n                          * *                                           * * ");
    printf("\n                          * *           WELCOME    TO    THE            * * ");
    printf("\n                          * *                                           * * ");
    printf("\n                          * *             PRINCE     HOTEL              * * ");
    printf("\n                          * *                                           * * ");
    printf("\n                          * *                                           * * ");
    printf("\n                          * *                                           * * ");
    printf("\n                          * *                                           * * ");
    printf("\n                          * *                                           * * ");
    printf("\n                          * ********************************************* * ");
    printf("\n                          *************************************************");
    printf("\n\n\n                                IT'S NOT A HOTEL , IT'S WAY OF LIFE. ");
    printf("\n\n\nPress Enter to continue :");
    getchar();
}
void intro()
{
    printf("\n1.Checking the Room.");
    printf("\n2.Different kinds of Room.");
    printf("\n3.Room Booking.");
    printf("\n4.Cancellation of Booking.");
    printf("\n5.Show Customer Details.");
    printf("\n6.Deallocation ");
    printf("\n7.Exit the Hotel.");
}
void avail()
{
    for (int i = 0; i < 5; i++)
    {

        if (room_no[i] == 1)
        {
            strcpy(room_type[i], "Deluxe");
            room_charge[i] = 1000;
            if (strcmp(room_cust[i], "N.A") == 0)
            {
                room_avail[i] = 'Y';
                room_per[i] = 0;
            }
        }
        else if (room_no[i] == 2)
        {
            strcpy(room_type[i], "Queen");
            room_charge[i] = 2000;
            if (strcmp(room_cust[i], "N.A") == 0)
            {
                room_avail[i] = 'Y';
                room_per[i] = 0;
            }
        }
        else if (room_no[i] == 3)
        {
            strcpy(room_type[i], "Couple");
            room_charge[i] = 1200;
            if (strcmp(room_cust[i], "N.A") == 0)
            {
                room_avail[i] = 'Y';
                room_per[i] = 0;
            }
        }
        else if (room_no[i] == 4)
        {
            strcpy(room_type[i], "General");
            room_charge[i] = 800;
            if (strcmp(room_cust[i], "N.A") == 0)
            {
                room_avail[i] = 'Y';
                room_per[i] = 0;
            }
        }
        else if (room_no[i] == 5)
        {
            strcpy(room_type[i], "Diamond");
            room_charge[i] = 2500;
            if (strcmp(room_cust[i], "N.A") == 0)
            {
                room_avail[i] = 'Y';
                room_per[i] = 0;
            }
        }
    }
}
void checkavail()
{
    printf("\n                          Room Availability");
    printf("\nRoom |  Type    |     Charge | Availability | Cust_Name |  Period |");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d       ", room_no[i]);
        printf("%s  ", room_type[i]);
        if (i == 0)
        {
            printf(" \t%d\t     %c\t     ", room_charge[i], room_avail[i]);
        }
        else if ((i == 1) || (i == 2))
        {
            printf(" \t%d\t     %c\t     ", room_charge[i], room_avail[i]);
        }
        else if ((i == 3) || (i == 4))
        {
            printf(" \t%d\t     %c\t     ", room_charge[i], room_avail[i]);
        }
        printf("  %s   ", room_cust[i]);
        if ((i == 1) || (i == 2))
        {
            printf("\t      %d", room_per[i]);
        }
        else if ((i == 3) || (i == 4))
        {
            printf("\t      %d", room_per[i]);
        }
        else
        {
            printf("\t      %d", room_per[i]);
        }
    }
}
void feature()
{
    int a;
    printf("\nChoose the room type:\n1. Deluxe\n2. Queen\n3. Couple\n4. General\n5. Diamond\n");
    scanf("%d", &a);
    if (a > 5)
    {
        printf("\nWrong choice!! Choose a CORRECT NUMBER BETWEEN 1 - 5");
        feature();
    }
    switch (a)
    {
    case 1:
        printf("\n\n\n Room number           1");
        printf("\n Advance               500\n\n");
        printf("\n *********************************************************************");
        printf("\n                      ESPICAILITY OF THE ROOM");
        printf("\n\n Room Type           Deluxe ");
        printf("\n\n Room Charges        1000");
        printf("\n\n Member capacity       5");
        printf("\n\n 1.Bed capacity        2");
        printf("\n\n 2.Complimentary Breakfast available ");
        printf("\n\n 3.Swimmingpool available ");
        printf("\n\n *********************************************************************\n");
        break;
    case 2:
        printf("\n\n\n Room number           2");
        printf("\n Advance               1000\n\n");
        printf("\n *********************************************************************");
        printf("\n                      ESPICAILITY OF THE ROOM");
        printf("\n\n Room Type           Queen ");
        printf("\n\n Member capacity       2 ");
        printf("\n\n Room Charges        2000");
        printf("\n\n 1.Bed capacity        2");
        printf("\n\n 2.Complimentary Breakfast available ");
        printf("\n\n 3.Gym available ");
        printf("\n\n 4.Swimmingpool available ");
        printf("\n\n *********************************************************************\n");
        break;
    case 3:
        printf("\n\n\n Room number           3");
        printf("\n Advance               600\n\n");
        printf("\n *********************************************************************");
        printf("\n                      ESPICAILITY OF THE ROOM");
        printf("\n\n Room Type           Couple ");
        printf("\n\n Room Charges        1200");
        printf("\n\n Member capacity       5");
        printf("\n\n 1.Bed capacity        1");
        printf("\n\n 2.Gym available ");
        printf("\n\n 3.Swimmingpool available ");
        printf("\n\n *********************************************************************\n");
        break;
    case 4:
        printf("\n\n\n Room number           4");
        printf("\n Advance               400\n\n");
        printf("\n *********************************************************************");
        printf("\n                      ESPICAILITY OF THE ROOM");
        printf("\n\n Room Type           General ");
        printf("\n\n Member capacity       2 ");
        printf("\n\n Room Charges        800");
        printf("\n\n 1.Bed capacity        1");
        printf("\n\n *********************************************************************\n");
        break;
    case 5:
        printf("\n\n\n Room number           5");
        printf("\n Advance               1250\n\n");
        printf("\n *********************************************************************");
        printf("\n                      ESPICAILITY OF THE ROOM");
        printf("\n\n Room Type           Diamond ");
        printf("\n\n Room Charges        2500");
        printf("\n\n Member capacity       5");
        printf("\n\n 1.Bed capacity        3");
        printf("\n\n 2.Complimentary Breakfast and Dinner available");
        printf("\n\n 3.Gym available");
        printf("\n\n 4.Swimmingpool available");
        printf("\n\n *********************************************************************\n");
    }
}
void booking()
{

    printf("\nEnter the room number in which you want to stay :\n");
    scanf("%d", &room);
    fflush(stdin);

    if (room_avail[room - 1] == 'Y')
    {
        fflush(stdin);
        printf("\n Enter Name of Customer :");
        gets(room_cust[room - 1]);
        printf("\n For how many days customer wants to stay :");
        scanf("%d", &room_per[room - 1]);
        printf("\n Enter Nationality :");
        scanf("%s", cust_nat[room - 1]);
        printf("\n Enter City Name :");
        scanf("%s", cust_city[room - 1]);
        printf("\nEnter no. of member in your group :");
        scanf("%d", &mem[room - 1]);
        if ((room == 1) || (room == 3) || (room == 5))
        {
            if ((mem[room - 1] < 1) || (mem[room - 1] > 5))
            {
                printf("\n %d members cannot be allocated this room.Allowed members are between 1-5.", mem[room - 1]);
                booking();
            }
        }
        else if ((room == 2) || (room == 4))
        {
            if ((mem[room - 1] < 1) || (mem[room - 1] > 2))
            {
                printf("\n %d members cannot be allocated this room.Allowed members are between 1-2.", mem[room - 1]);
                booking();
            }
        }
        printf("\nEnter the date of Arrival : ");
        printf("\n----------------------------- ");
        printf("\n Year : ");
        scanf("%d", &year[room - 1]);
        printf("\n Month : ");
        scanf("%d", &month[room - 1]);
        printf("\n Day : ");
        scanf("%d", &day[room - 1]);
        if ((year[room - 1] > 9999) || (month[room - 1] > 12) || (month[room - 1] < 1) || (day[room - 1] < 1) || (((month[room - 1] == 1) || (month[room - 1] == 3) || (month[room - 1] == 5) || (month[room - 1] == 7) || (month[room - 1] == 8) || (month[room - 1] == 10) || (month[room - 1] == 12)) && (day[room - 1] > 31)) || (((month[room - 1] == 4) || (month[room - 1] == 6) || (month[room - 1] == 9) || (month[room - 1] == 11)) && (day[room - 1] > 30)) || ((month[room - 1] == 2) && ((year[room - 1] % 400 == 0) || ((year[room - 1] % 4 == 0) && (year[room - 1] % 100 != 0))) && (day[room - 1] > 29)) || ((month[room - 1] == 2) && (year[room - 1] % 4 != 0) && (day[room - 1] > 28)))
        {

            printf("\n\n!!!! INVALID DATE     ");
            getch();
            booking();
        }
        else
        {
            printf("\n   Room is allocated to ");
            printf("%s ", room_cust[room - 1]);
            printf("for %d days.", room_per[room - 1]);
            room_avail[room - 1] = 'N';
            getch();
        }
    }
    else
    {
        printf("\n ERROR : Room cannot be allocated ...");
        printf("\n Room is not available...");
    }
}
void cancel()
{
    printf("\nEnter the room number:");
    scanf("%d", &room);
    if (room_cust[room - 1] == "N.A")
    {
        printf("\nThe room is empty....");
    }
    else
    {
        printf("\nEnter the name of the person staying in the room:");
        fflush(stdin);
        gets(name);
        if (strcmp(name, room_cust[room - 1]) == 0)
        {
            printf("\nReservation for room number %d is cancelled....", room);
        }
        else
        {
            printf("\nInvalid name..");
            getch();
            main();
        }
    }
    g_tot = advance[room - 1];
    printf("\nYour total bill is %d", g_tot);
}
void cust()
{
    int j;
    printf("\nEnter the room number:");
    scanf("%d", &room);
    j = strcmp(room_cust[room - 1], "N.A");
    if (j == 0)
    {
        printf("\nData not available ");
        getch();
    }
    else
    {
        printf("\nRoom No        : %d", room_no[room - 1]);
        printf("\nCustomer Name   : %s", room_cust[room - 1]);
        printf("\nPeriod          : %d", room_per[room - 1]);
        printf("\nCity            : %s", cust_city[room - 1]);
        printf("\nNationality     : %s", cust_nat[room - 1]);
        printf("\nDate of Arrival : %d/%d/%d", day[room - 1], month[room - 1], year[room - 1]);
    }
}
void deallocate()
{

    printf("\nEnter the room number:");
    scanf("%d", &room);
    if (room_cust[room - 1] == "N.A")
    {
        printf("\nThe room is empty........");
        getch();
    }
    else
    {
        printf("\nEnter the name of the person staying in the room:");
        fflush(stdin);
        gets(name);
        if (strcmp(name, room_cust[room - 1]) == 0)
        {
            printf("\nRoom number %d is deallocated......", room);
            strcpy(room_cust[room - 1], "N.A");
            getch();
        }
        else
        {
            printf("\nInvalid name........");
            getch();
            deallocate();
        }
    }
    /*Multiply room per[room-1] which is the total number of days and room charges[room - 1] which is half price and than subtract from advance[room - 1] which is half of toal price and than add tot[room - 1]which is set to zero in array. */
    g_tot = (room_per[room - 1] * room_charge[room - 1]) - advance[room - 1];
    printf("\n\nYour total bill is %d", g_tot);
    printf("\n\n\nThanks for staying in this hotel.........");
}

void deallocate();
void cust();
void cancel();
void booking();
void feature();
void headline();
void intro();
void avail();
void checkavail();
void main()
{
    char ans;
    int ch;
    do
    {
        headline();
        intro();
        printf("\nHow can I help you between (1-6) : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            avail();
            checkavail();
            break;
        case 2:
            feature();
            break;
        case 3:

            booking();
            break;
        case 4:
            cancel();

            break;
        case 5:
            cust();
            break;
        case 6:
            deallocate();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("\nYou have enter the wrong key!!!\nPlease choose between 1-6");
            break;
        }
        printf("\n\nDo you want to continue (Y / N) :");
        fflush(stdin);
        scanf("%c", &ans);
    } while (ans == 'Y' || ans == 'y');
}
