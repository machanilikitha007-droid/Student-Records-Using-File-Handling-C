#include <stdio.h>

struct Student
{
    int rollNumber;
    char name[50];
    float marks;
};

int main()
{
    struct Student student;
    FILE *file;

    printf("===== Student Records Using File Handling =====\n");

    file = fopen("students.txt", "a");

    if (file == NULL)
    {
        printf("Unable to open file!\n");
        return 1;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter Name: ");
    scanf(" %49[^\n]", student.name);

    printf("Enter Marks: ");
    scanf("%f", &student.marks);

    fprintf(file, "Roll Number: %d\n", student.rollNumber);
    fprintf(file, "Name: %s\n", student.name);
    fprintf(file, "Marks: %.2f\n", student.marks);
    fprintf(file, "-------------------------\n");

    fclose(file);

    printf("\nStudent record saved successfully!\n");
    printf("Data is stored in students.txt\n");

    return 0;
}
