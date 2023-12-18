#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct STUDENT
{
    char name[20];
    int id, assignment_score[5], sum_assignment, mid_score, final_score, total_score;

} student;

void add_student(student *class, int *ptr_num, FILE *fptr)
{
    char choice;
    do
    {
        (*ptr_num)++;
        class = realloc(class, sizeof(student) * (*ptr_num));
        printf("\nENTER STUDENT NAME: ");
        scanf("%s", class[*ptr_num - 1].name);
        printf("\nENTER STUDENT ID: ");
        scanf("%d", &class[*ptr_num - 1].id);
        printf("\nENTER ASSIGNMENT SCORES");
        class[*ptr_num - 1].sum_assignment = 0;
        for (int i = 0; i < 5; i++)
        {
            printf("\nAssignment#%d: ", i + 1);
            scanf("%d", &class[*ptr_num - 1].assignment_score[i]);
            class[*ptr_num - 1].sum_assignment += class[*ptr_num - 1].assignment_score[i];
        }
        printf("\nENTER MID EXAM SCORE: ");
        scanf("%d", &class[*ptr_num - 1].mid_score);
        printf("\nENTER FINAL EXAM SCORE: ");
        scanf("%d", &class[*ptr_num - 1].final_score);
        write_in_file(class, ptr_num, fptr);
        printf("Add another student (Y/N): ");
        choice = lower(getch());
    } while (choice == 'y');
}

void write_in_file(student *class, int *ptr_num, FILE *fptr)
{
    fptr = fopen("Student_Database.txt", "a");
    fprintf("%s", class[*ptr_num - 1].name);
    fclose(fptr);
    // find code that converts a variable of x data type to y data type
    // Convert all data types to string cz data is stored in string format in txt files OR search whether CSV files accept data of other data types except str
}

void read_from_file(student *class, int *ptr_num, FILE *fptr, int *index)
{
    char temp[200];
    int i = 1;
    fptr = fopen("Student_Database.txt", "r");
    // Find function that brings cursor to desired location in the file fseek()
}
void class_stats(student *class, int *ptr_num, FILE *fptr)
{
    int i = 0, *index = &i; // filhaal
    read_from_file(class, ptr_num, fptr, index);
}

int main()
{
    student *class = NULL;
    int num_students = 0, *ptrnum = &num_students;
    FILE *fptr;
    int choice = 1;
    while (choice != 3)
    {
        printf("STUDENTS DATABASE SYSTEM\nMENU\n1.ADD STUDENT(S)\n2.DISPLAY CLASS STATISTICS\3.EXIT\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add_student(class, ptrnum, fptr);
            break;
        case 2:
            class_stats(class, ptrnum, fptr);
            break;
        default:
            printf("\nInvalid choice");
            break;
        }
    }

    return 0;
}