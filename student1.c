#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char another='y';
    int marks1,marks2,marks3,marks4,marks5,role;
    char name[20];
    //clrscr(); 
    fp=fopen("Students.txt","w");
    if(fp==NULL)
    {
        puts("Cannot open file");
        exit(1);
    }
       fprintf(fp,"Role No.\tNAME\t  PPS  CHEMISTRY  MATHS  Psp  VE\n");
    while(another=='y')
    {
        printf("\nEnter name :");
        scanf("%s",name);
        printf("Enter your Roll No.:");
        scanf("%d",&role);
        printf("Enter marks in PPS:");
        scanf("%d",&marks1);
        printf("Enter marks in Chemistry:");
        scanf("%d",&marks2);
        printf("Enter marks in Mathematics:");
        scanf("%d",&marks3);
        printf("Enter marks in PsP:");
        scanf("%d",&marks4);
        printf("Enter marks in VE:");
        scanf("%d",&marks5);
        fprintf(fp,"%d\t%s\t%d\t%d\t%d\t%d\t%d\n",role, name, marks1,marks2,marks3,marks4,marks5);
        printf("Add another record (y/n): ");
        fflush(stdin);
        another=getch();
    }
    fclose(fp);
}

