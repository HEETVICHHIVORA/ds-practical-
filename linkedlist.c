#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void linkedListTraversal(struct node *ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void length(struct node *head){
    struct node * temp = head ;
    if(head->next==NULL){
        printf("%d",0);
    }
    else{
        int  length = 1 ;
    while (temp->next!=NULL){
        temp = temp ->next;
        length++;
    }
    printf("%d",length);

    }
    
}
struct node* creator (struct node * head ,int data,int position){
     struct node* ptr= (struct node*) malloc (sizeof(struct node));
     ptr->data = data ;
  if(position==0){
 
  ptr->next = head;
  head = ptr ;
 
  

  }
  else{
   int i = 0;
 
   struct node* p=head;
   
   while(i < position - 1 && p != NULL){
    p=p->next;
    i++;
   }
  if (p == NULL) {
            free(ptr);
            printf("Invalid position for insertion.\n");
        } else {
            ptr->next = p->next;
            p->next = ptr;
        }
   return head;

  }
  
}

int main (){
    struct node*head=NULL;
    head =creator(head,20,0);
    head =creator(head,30,0);
    head =creator(head,50,0);
    head =creator(head,60,1);
    linkedListTraversal(head);
    length(head);
    return  0 ;
}