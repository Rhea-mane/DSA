#include<stdio.h>
#include<stdlib.h>
struct pers
{
    int code,age;
    char name[20];
};
typedef struct node
{
    struct pers n;
    struct node *next;
}NODE;
#define newnode() (NODE*)malloc(sizeof(NODE))
int main()
{
     NODE *h,*p;
     int ch;
     p=newnode();
     h=p;
     do
        { printf("Enter name\n");
     scanf("%s",p->n.name);
     printf("Enter age\n");
     scanf("%d",&p->n.age);
     printf("Enter rollno\n");
     scanf("%d",&p->n.code);


     printf("continue(1/0)?");
     scanf("%d",&ch);
     if(ch==1)
     {
         p->next=newnode();
         p=p->next;
     }
     else
     {
         p->next=NULL;
         break;
     }
     }     while(1);
     printf("list is\n");
     p=h;
     while(p!=NULL)
     {

         printf("%4d %-20s %4d\n",p->n.code,p->n.name,p->n.age);
         p=p->next;
     }

}
