//Make a system that can store info of all students, teachers & staff of your college in the form of structures

#include <stdio.h>
#include <string.h>

typedef struct student {
    char name[100];
    int roll;
    float cgpa;
} stu;

typedef struct teacher {
    char name1[100];
    char dept[100];
    int sal;
} tch;

typedef struct staff {
    char Name[100];
    char pos[100];
    int Sal;
} stf;

int main() {
    stu students[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter student info for %d:\n", i + 1);
        printf("Student name: ");
        scanf("%s", students[i].name);
        printf("Student roll: ");
        scanf("%d", &(students[i].roll));
        printf("Student CGPA: ");
        scanf("%f", &(students[i].cgpa));
    }

    tch teachers[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter teacher info for %d:\n", i + 1);
        printf("Teacher name: ");
        scanf("%s", teachers[i].name1);
        printf("Teacher department: ");
        scanf("%s", teachers[i].dept);
        printf("Teacher salary: ");
        scanf("%d", &(teachers[i].sal));
    }

    stf staff[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter staff info for %d:\n", i + 1);
        printf("Staff name: ");
        scanf("%s", staff[i].Name);
        printf("Staff position: ");
        scanf("%s", staff[i].pos);
        printf("Staff salary: ");
        scanf("%d", &(staff[i].Sal));
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll: %d\n", students[i].roll);
        printf("CGPA: %f\n", students[i].cgpa);
        printf("\n");
    }

    printf("\nTeacher Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Teacher %d\n", i + 1);
        printf("Name: %s\n", teachers[i].name1);
        printf("Department: %s\n", teachers[i].dept);
        printf("Salary: %d\n", teachers[i].sal);
        printf("\n");
    }

    printf("\nStaff Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Staff %d\n", i + 1);
        printf("Name: %s\n", staff[i].Name);
        printf("Position: %s\n", staff[i].pos);
        printf("Salary: %d\n", staff[i].Sal);
        printf("\n");
    }

    return 0;
}

