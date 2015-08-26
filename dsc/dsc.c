#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
typedef struct
{
    float start;
    char section[20];
    char subject[50];
    float end;
}info;

info staff1[5][7];
info staff2[5][7];

char weekdays[7][4]={"mon","tue","wed","thu","fri","sat","sun"};

void define()
{
    int i,j;
    for( i=0;i<5;i++)                                                              // initializing all sections to indicate free classes
    {
        for(j=0;j<7;j++)
        {
        strcpy(staff1[i][j].section,"NO CLASS");
        strcpy(staff2[i][j].section,"NO CLASS");
        strcpy(staff1[i][j].subject,"-");
        strcpy(staff2[i][j].subject,"-");
        }
    }
    strcpy(staff1[0][1].section,"3 A");     strcpy(staff1[0][4].section,"5 A");     // staff 1 time table
    strcpy(staff1[0][5].section,"3 A");     strcpy(staff1[0][6].section,"3 A");
    strcpy(staff1[1][0].section,"3 A");     strcpy(staff1[1][1].section,"5 A");
    strcpy(staff1[1][2].section,"5 A");     strcpy(staff1[1][5].section,"3 A");
    strcpy(staff1[2][0].section,"3 C");     strcpy(staff1[2][1].section,"3 C");
    strcpy(staff1[2][3].section,"3 A");
    strcpy(staff1[3][0].section,"5 A");
    strcpy(staff1[3][2].section,"5 A");     strcpy(staff1[3][3].section,"5 A");
    strcpy(staff1[4][0].section,"5 A");     strcpy(staff1[4][1].section,"5 A");
    strcpy(staff1[4][4].section,"5 A");

    strcpy(staff1[0][1].subject,"DSC");             strcpy(staff1[0][4].subject,"DBMS");
    strcpy(staff1[0][5].subject,"DSC TUTORIAL");    strcpy(staff1[0][6].subject,"DSC TUTORIAL");
    strcpy(staff1[1][0].subject,"DSC LAB");         strcpy(staff1[1][1].subject,"DSC LAB");
    strcpy(staff1[1][2].subject,"DBMS");            strcpy(staff1[1][5].subject,"DSC");
    strcpy(staff1[2][0].subject,"DSC LAB");         strcpy(staff1[2][1].subject,"DSC LAB");
    strcpy(staff1[2][3].subject,"DSC");
    strcpy(staff1[3][0].subject,"DBMS");            strcpy(staff1[3][2].subject,"CN LAB");
    strcpy(staff1[3][3].subject,"CN LAB");
    strcpy(staff1[4][0].subject,"DBMS LAB");        strcpy(staff1[4][4].subject,"DBMS");
    strcpy(staff1[4][5].subject,"COLLEGE DEPARTMENT ACTIVITY");
    strcpy(staff1[4][6].subject,staff1[4][5].subject);


    strcpy(staff2[0][0].section,"3 A");      // staff 2 timetable
    strcpy(staff2[1][0].section,"5 C");
    strcpy(staff2[1][1].section,"5 C");     strcpy(staff2[1][3].section,"3 A");
    strcpy(staff2[1][5].section,"3 C");     strcpy(staff2[1][6].section,"3 C");
    strcpy(staff2[2][0].section,"7 B");     strcpy(staff2[2][1].section,"7 B");
    strcpy(staff2[2][2].section,"3 A");     strcpy(staff2[2][4].section,"3 A");
    strcpy(staff2[2][5].section,"3 B");     strcpy(staff2[2][6].section,"3 B");
    strcpy(staff2[3][0].section,"3 A");     strcpy(staff2[3][1].section,"3 A");
    strcpy(staff2[3][4].section,"3 A");     strcpy(staff2[3][5].section,"3 A");
    strcpy(staff2[4][0].section,"3 A");     strcpy(staff2[4][3].section,"3 A");

    strcpy(staff2[0][0].subject,"DMS");
    strcpy(staff2[1][0].subject,"JAVA LAB");
    strcpy(staff2[1][1].subject,"DSC LAB");         strcpy(staff2[1][3].subject,"OOPS");
    strcpy(staff2[1][6].subject,"DMS TUTORAIL");    strcpy(staff2[1][5].subject,"DMS TUTORAIL");
    strcpy(staff2[2][0].subject,"HPC LAB");         strcpy(staff2[2][1].subject,"HPC LAB");
    strcpy(staff2[2][2].subject,"OOPS");
    strcpy(staff2[2][4].subject,"DMS");            strcpy(staff2[2][5].subject,"DMS TUTORIAL");
    strcpy(staff2[2][6].subject,"DMS TUTORAIL");
    strcpy(staff2[3][0].subject,"OOPS LAB");        strcpy(staff2[3][1].subject,"OOPS LAB");
    strcpy(staff2[3][4].subject,"DMS TUTORIAL");    strcpy(staff2[3][5].subject,"DMS TUTORIAL");
    strcpy(staff2[4][0].subject,"OOPS");            strcpy(staff2[4][3].subject,"DMS");
    strcpy(staff2[4][5].subject,"COLLEGE DEPARTMENT ACTIVITY");
    strcpy(staff2[4][6].subject,"COLLEGE DEPARTMENT ACTIVITY");
}

info get(int staff_no,int day_no,int period)            // returns the structure containing the required details
{
    info answer;

    define();                                           // call the function define
         if(staff_no==1)
            answer=staff1[day_no][period-1];
        else
            answer=staff2[day_no][period-1];


        switch(period)                       // storing the time i.e. start and end fields
        {
            case 1: answer.start=9.00; answer.end=9.55;   break;
            case 2: answer.start=9.55; answer.end=10.50;  break;
            case 3: answer.start=11.05;answer.end=12.00;  break;
            case 4: answer.start=12.00;answer.end=12.55;  break;
            case 5: answer.start=1.45; answer.end=2.40;   break;
            case 6: answer.start=2.40; answer.end=3.35;   break;
            case 7: answer.start=3.35; answer.end=4.30;   break;
        }
        return answer;
}

void main()
{
    info answer;
    int i,day_number;
    int staff_no,period_no,day_no;
    char day[4];

    printf("\n\n\n\n\n===========================================================================\n\n\n");
    printf("\n\n\n\n\n\t\t\t\t TIMETABLE\n\n\n");

    printf("===========================================================================\n\n\n");
    printf("\n\n\n \t\t\tpress any key to continue");
    getch();

    while(1)
    {
        day_number=-1;
        system("cls");
    printf("\n\n\n\n\t\t   Staff Name\t\t\t Choice\n");
    printf("-----------------------------------------------------------------------------");
    printf("\n\n\t\t 1.Ms.Mamatha Jadhav V \t\t enter 1 \n\t\t 2.J Geetha Reddy\t\t enter 2\n\n\n \t\t press 3 to exit \n\n\n\t\t enter your choice:");
    scanf("%d",&staff_no);

    fflush(stdin);
    while(staff_no!=1&&staff_no!=2&&staff_no!=3)
    {
        fflush(stdin);
        printf("\n\n\t\t  Invalid choice. Please re-enter:");
        scanf("%d",&staff_no);
    }

    if(staff_no==3)                              // exit condition for the loop
    {   system("cls");
        printf("\n\n\n------------------------------------------------------------------------");
        printf("\n\n\n\n\n\n\t\t\t\t THANK YOU\n\n\n");
        printf("\n\n\n------------------------------------------------------------------------\n\n\n\n\n");
        exit(0);
    }

    system("cls");
    printf("");
    printf("\n\n\t\t enter the day for which class need to be found \n\n\t\t for example:\n\n\t\t mon for monday\n\t\t tue for tuesday\n\t\t ");
    printf("wed for wednesday\n\t\t thu for thursday\n\t\t fri for friday\n\t\t sat for saturday \n\t\t sun for sunday");
    printf("\n\n\t\t enter your choice:");
    scanf("%s",day);

    fflush(stdin);

    for(i=0;i<7;i++)
        {
            if(strcmp(day,weekdays[i])==0)
            day_number=i;
        }
    while(day_number==-1)
        {
            printf("\n\n\t\t Error: entered day is invalid\n\n\t\t please re-enter your choice:");
            scanf("%s",day);
             for(i=0;i<7;i++)
            {

                if(strcmp(day,weekdays[i])==0)
                {

                    day_number=i;
                }

            }

            fflush(stdin);
        }

    if(day_number==6)
    {
        system("cls");
        printf("\n\n\n\n\t\t\t no classes on sunday!!!\n\n\n");
        printf("\n\n\t\t\t press any key to continue...");
        getch();
        continue;
    }

    else if(day_number==5)                              // Saturday
        {
            system("cls");
            printf("\n \n\t\t\t department activity\n\n\n");
            printf("\n\n\t\t\t press any key to continue...");
            getch();
            continue;
        }

    system("cls");
    printf("\n\n\n \t\t Time\t\t Choice\n ");
    printf("\n\n \t\t 09:00 - 09:55:\t enter 1 \n\t\t 09:55 - 10:50:\t enter 2 \n\t\t 11:05 - 12:00:\t enter 3 \n\t\t 12:00 - 12:55:\t enter 4\n\t\t 01:45 - 02:40:\t enter 5 \n\t\t 02:40 - 03:35:\t enter 6 \n\t\t 03:35 - 04:30:\t enter 7 ");
    printf("\n\t\t enter the period number:");
    scanf("%d",&period_no);

    fflush(stdin);
    while(period_no<1||period_no>7)
    {
        fflush(stdin);
        printf("\n\t\t entered period number is invalid.\n\t\t Please re-enter your choice :");
        scanf("%d",&period_no);
    }

    answer=get(staff_no,day_number,period_no);
    system("cls");
    printf("\n\n\n\t\t\t\t Time Table\n ");
    printf("______________________________________________________________________________");
    printf("\n \n \n \t\t\t Time:\t\t%.2f - %.2f \n\t\t\t Section:\t%s \n\t\t\t Subject:\t%s\n",answer.start,answer.end,answer.section,answer.subject);
    printf("______________________________________________________________________________\n\n");
    printf("\n\n\t\t press any key to continue...");
    getch();

    }
}

