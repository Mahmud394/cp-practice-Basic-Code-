#include<stdio.h>
int main ()
{
    struct employee{
        char name[100];
        int id;
        float salary;
    };
    struct employee N[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter name :");
        fflush(stdin);
        gets( N[i].name);
        printf("Enter ID :");
        scanf("%d",&N[i].id);
        printf("Enter salary :");
        scanf("%f",& N[i].salary);
    }
    for(int i=0;i<3;i++)
    {
        printf("\n\n Name : %s\n",N[i].name);
        printf(" ID : %d\n",N[i].id);
        printf(" Salary :%.2f",N[i].salary);
    }
}
