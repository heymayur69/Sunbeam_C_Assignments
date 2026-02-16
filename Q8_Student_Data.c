#include <stdio.h>
#include <string.h>

struct student
{
    char studentName[50];
    char rollno[20];
    int totalmarks;

};

void inputStudent(struct student *s){
    printf("Enter Name : ");
    scanf("%s",s->studentName);

    printf("Enter Roll No : ");
    scanf("%s",s->rollno);

    printf("Enter Marks : ");
    scanf("%d",&s->totalmarks );
}

void displayStudent (struct student *s){
    printf("Student Data \n");
    printf("Student Name:%s\n",s->studentName);
    printf("Student Roll No:%s \n",s->rollno);
    printf("Marks Obtained :%d\n",s->totalmarks);
}
int main() {
    struct student s1;
    inputStudent(&s1);
    displayStudent(&s1);

    return 0;
}