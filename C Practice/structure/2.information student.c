#include<stdio.h>
struct student
{
    int id;
    char name[50];
    float cgpa;
};
int main()
{
    struct student student[2];
    int i;
    for(i=0;i<2;i++)
    {
        printf("\n\nEnter information for student %d :\n",i+1);
        printf("Enter Name :");
        fflush(stdin);
        gets(student[i].name);
        printf("Enter ID(last 3 digite) :");
        scanf("%d",&student[i].id);
        printf("Enter CGPA :");
        scanf("%f",&student[i].cgpa);
    }
    for(i=0;i<2;i++)
    {
        printf("\n\nInformation for student %d\n",i+1);
        printf(" Name : %s\n",student[i].name);
        printf(" ID :%d\n", student[i].id);
        printf(" CGPA :%.2f",student[i].cgpa);

    }

}
