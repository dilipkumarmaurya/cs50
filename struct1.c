#include<stdio.h>
#include<cs50.h>
#include<string.h>


#include<stdlib.h>

typedef struct {

    char *name;
    char *dorm;
} student;

int main(void)
{
    int enrollment = get_int("Enrollmet:");

    student students[enrollment];

    for(int i =0;i<enrollment;i++)
    {
        students[i].name = get_string("Name: \n");
        students[i].dorm = get_string("dorm: \n");
    }

    FILE *file = fopen("student.csv","w");
    if(file)
    {

        for(int i =0;i<enrollment;i++)
        {

            fprintf(file,"%s, %s\n", students[i].name, students[i].dorm);
        }
    }
    fclose(file);
    return 0;

}