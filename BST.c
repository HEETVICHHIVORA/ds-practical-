#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node* left;
    struct node * right;

};
struct node* createNode(int data){
    struct node *n; 
    n = (struct node *) malloc(sizeof(struct node)); 
    n->data = data;
    n->left = NULL;
    n->right = NULL; 
    return n; 
}
void  insert(struct node *n,int data ){
      struct node *prev = NULL;
      while(n!=NULL){
          prev = n ;
          if(data==n->data){
              printf("not possible\n");
              return;
          }else if (data <n->data){
              n=n->left;
          }
          else{
              n=n->right;
          }
          
      }
      struct node * new =createNode(data);
          if(data<prev->data){
              prev ->left =new;
          }
          else{
              prev->right = new;
          }
}
int main (){
  
    struct node *p  = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
     insert(p, 16);
    printf("%d", p->right->right->data);

    return 0 ;

}