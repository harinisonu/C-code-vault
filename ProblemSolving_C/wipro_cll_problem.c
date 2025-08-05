/********
The input to the function insertSortedList is a pointer start to some node in the circular list and an integer n between 0 and 100. Return a pointer to the newly inserted node.

The structure to follow for a node of the circular linked list is-

Struct CNode;
Typedef struct CNode cnode;
Struct CNode
{
   Int  value;
   Cnode* next;
};
Cnode* insertSortedList (cnode* start,int n)
{
   //WRITE YOUR CODE HERE
}
//FUNCTION SIGNATURE ENDS

Test Case 1:
Input:
[3->4->6->1->2->^],5
Expected Return Value:
[5->6->1->2->3->4->^]

Test Case  2:
Input:
[1->2->3->4->5->^],0
Expected Return Value:
[0->1->2->3->4->5->^]
********/

#include<stdio.h>
struct CNode;
typedef struct CNode Cnode;
struct CNode
{
   int  value;
   Cnode* next;
};
typedef Cnode * cnode;
void insertSortedList (cnode* start,int n);
void print(cnode start);
int main()
{
    int arr[]={20,30,40,50,52,10,15,6,12,24,33,25,35};
    int tot_arr,ind;
    cnode start=NULL;
    tot_arr= sizeof(arr)/sizeof(arr[0]);
    for(ind= 0 ;ind< tot_arr;ind++)
    {
        insertSortedList(arr[ind],&start);
    }
    print(start);
    return 0;
}
void print(cnode start)
{
    cnode tptr;
    if(start==NULL) return;
    printf("\n");
    tptr=start;
    do
    {
        printf("%d ",tptr->value);
        tptr=tptr->next;
    }while(tptr!=(start));
}
void insertSortedList (cnode* start,int n)
{
   cnode newnode,tptr,prev;
   newnode=(cnode)malloc(sizeof(Cnode));
   newnode->value=n;
   newnode->next=NULL;
   if((*start)==NULL)
   {
       (*start)=newnode;
       newnode->next=newnode;
       return;
   }
   if(newnode->value < (*start)->value)
   {
       tptr = (*start);
       do
       {
           prev=tptr;
           tptr=tptr->next;
       }while(tptr != (*start));
       prev->next=newnode;
       newnode->next=tptr;
       (*start)=newnode;
   }
   else
   {
       tptr=(*start);
       do
       {
           prev=tptr;
           tptr=tptr->next;
       }while(tptr != (*start) && newnode->value > tptr->value);
       prev->next=newnode;
       newnode->next=tptr;
       (*start)=newnode;
   }
}
