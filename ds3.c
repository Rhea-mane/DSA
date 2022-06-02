#include<stdio.h>
struct node
{
    char name[20];
    int age;
    int rollno;
   struct node *next;
};
typedef struct node NODE;
#define newnode() (NODE*)malloc(sizeof(NODE))
int main()
{
     NODE *h,*p;
     int ch;
     p=newnode();
     h=p;
     do
        { printf("Enter name\n");
     scanf("%s",&p->name);
     printf("Enter age\n");
     scanf("%d",&p->age);
     printf("Enter rollno\n");
     scanf("%d",&p->rollno);


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
         printf("%s\n",p->name);
         printf("%d\n",p->age);
         printf("%d\n",p->rollno);
         p=p->next;
     }

}






