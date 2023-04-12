//WAP to enter player name, team and enter 3 run and print average of 3 player.
#include<stdio.h>
#include<stdlib.h>
struct player
{
    char pteam[20];
    char pname[20];
    int r[3];
}*ptr;
int main()
{
    int i,j;
    float avg1,sum1;
    ptr=(struct player *)malloc(9*sizeof(struct player));
    for(i=0;i<3;i++)
    {
        printf("\n enter %d player's team name:",i+1);
        scanf("%s",(ptr+i)->pteam);
        printf("\n enter %d player's name:",i+1);
        scanf("%s",(ptr+i)->pname);
        sum1=0;
        for(j=0;j<3;j++)
        {
            printf("\n enter run of %d inning:",j+1);
            scanf("%d",&(ptr+j)->r[j]);
        }
        for(j=0;j<3;j++)
        {
            sum1=sum1+(ptr+j)->r[j];
        }
        avg1=sum1/3;

         printf("\n average of %d batsman:%f",i+1,avg1);
        printf("\n player name:%s",(ptr+i)->pname);
        printf("\n team name:%s",(ptr+i)->pteam);
    }

}
