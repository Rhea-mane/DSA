#include<stdio.h>

struct node
{
 float n;
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
        { printf("Enter the integer");
     scanf("%f",&p->n);
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
         printf("%f\n",p->n);
         p=p->next;
     }

}





