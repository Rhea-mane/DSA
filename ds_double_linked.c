#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int n;
    struct node *next,*prev;
}NODE;
#define newnode() (NODE*)malloc(sizeof(NODE))
main()
{
     NODE *h,*p,*l;
     int ch;
     p=newnode();
     h=p;
     do
       {  printf("Enter the integer:");
          scanf("%d",&p->n);
          printf("continue(1/0)?");
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
         printf("list is");
         p=h;
         while(p!=NULL)
         {
         printf("%4d",p->n);
         p=p->next;
         }
     printf("\nReverse list is");
     p=l;
     while(p!=NULL)
     {
         printf("%4d",p->n);
         p=p->prev;
     }
printf("Enter integer")

}




