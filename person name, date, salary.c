//WAP that define structure person that would contain person name, date of joining, salary of 5 person
#include<stdio.h>
struct pertion
{
    char name[20];
    int sal;
    char date[10];
}p[5];
void main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n enter person name:");
        gets(p[i].name);
        printf("\n enter person's date of joining :");
        scanf("%s",p[i].date);
        printf("\n enter person's salary:");
        scanf("%d",&p[i].sal);

    }
    for(i=0;i<5;i++)
    {
        printf("\n person name:%s",p[i].name);
        printf("\n person's date of joining:%s",p[i].date);
        printf("\n person's salary:%d",p[i].sal);
    }
}
