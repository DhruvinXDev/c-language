#include<stdio.h>
/* host name= dhruvin vaghasiya
date=13/09/2024 */
void part1( );
int part2( );
void part3(float g[],int );
float part4(float g[],int );


void main( )
{
    int num,i,j,k,n;
    float ans;
    float grade[50];

    // num =total number of student
    // i = for loop
    part1();

    num = part2( );
    printf(" \n",num);

    for(i=0;i<num;i++)
    {
        printf("%d) student grade:",i+1);
        scanf("%f",&grade[i]);
    }

    part3(grade,num);

    ans=part4(grade,num);
    printf(" \n \nThe Average Grade Of The Students is :%.2f\n",ans);

printf("----------------------------------------------------- \n ");
 printf("My Name Is Dhruvin Vaghasiya. \n My Id Number Is 24CE137.");


}
void part1( )
{
    printf("Welcome to CHARUSAT university!\n");
    printf("========================================\n");
}
int part2( )
{
    int x;
    printf("Enter The Total Number Of Student:");
    scanf("%d",&x);
    return x;
}
void part3(float g[],int y)
{
    printf("\n \nStudent grade:\n");
    for(int i=0;i<y;i++)
    {
        printf("%d) Student grade is:%.2f\n",i+1,g[i]);
    }
}
float part4(float g[],int y)
{
    float x=0;
    for(int i=0;i<y;i++)
    {
        x=x+g[i];
    }
    x=x/y;
    return x;
}
