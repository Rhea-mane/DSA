#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int n;
    struct node *next,*prev;
}NODE;
#define newnode() (NODE*)malloc(sizeof(NODE))

int main()
{
    NODE *h,*p,*l,*t;
    int ch,s;
    p=newnode();
    h=p;
    p->prev=NULL;
    do
    {
        printf("Enter integer:");
        scanf("%d",&p->n);
        printf("Continue(1/0)?");
        scanf("%d",&ch);
        if(ch==1)
        {
            p->next=newnode();
            p->next->prev=p;
            p=p->next;
        }
        else
        {
            p->next=NULL;
            l=p;
            break;
        }
    }while(1);
    printf("list is\n");
    p=h;
    while(p!=NULL)
    {
        printf("%4d",p->n);
        p=p->next;
    }
 printf("Enter integer after which you want to add");
 scanf("%d",&s);
 p=h;
 while(p!=NULL)
 {
     if(p->n==s)
     {
         t->newnode();
         t->next=p->next;
         t->prev=p;
         p->next=t;
         if(t->next!=NULL)
            {t->next->prev=t;
         printf("Enter integer to be added");
         scanf("%d",&t->n);
         break;
         }
         p=p->next;




     }
 }
  printf("list is\n");
    p=h;
    while(p!=NULL)
    {
        printf("%4d",p->n);
        p=p->next;
    }
}
