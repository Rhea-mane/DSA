#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>

struct node
{
 int n;
struct node *next;
};
typedef struct node NODE;
#define newnode() (NODE*)malloc(sizeof(NODE))
int main()
 {
     NODE *h=NULL,*p,*t;
     int i,pos,s;
     int ch,opt;
     p=newnode();
     do
     {
         printf("1.Create 2.Insert 3.Delete 4.Display 5.Search 6.Exit\n")
         scanf("%d",opt);
     }
     switch(opt)
 case 1: if(h==NULL)
            {
              printf("New List: \n");
                p=newnode();
                h=p;
                break;
            }
                do
                {
                    printf("Enter any integer: \n");
                    scanf("%d",&p->n);
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

 }

