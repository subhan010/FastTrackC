#include<stdio.h>
#include<stdlib.h>
#include<day6ops.c>



struct student
{
    int roll_no;
    char * name;
    int age;
    int marks;

}
;
struct student list[10];

int main()
{
    for(int i=0;i<10;i++)
    {
        list[i].roll_no=20241+(i)*10;
        list[i].name="A";
        list[i].age=rand()%(25-21+1)+21;
        list[i].marks=rand()%(300-150+1)+150;
    }

    for(int i=0;i<10;i++)
    {
        printf("Recond %d\n",i);
        printf("%d\n",list[i].roll_no);
        printf("%s\n",list[i].name);
        printf("%d\n",list[i].age);
        printf("%d\n",list[i].marks);
        printf("\n");
        

        
    }
}

