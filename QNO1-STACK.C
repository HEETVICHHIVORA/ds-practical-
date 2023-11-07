#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int size;
    int *arr;
};
int iskhali(struct stack *p){
    if(p->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack *p){
    if(p->top==p->size-1){
        return 1;
    }
    else{
        return 0 ;
    }
}
void push (struct stack* h,int value){
    if(isfull(h)){
        printf("hey stack is full\n");

    }
    else{
        h->top++;
        h->arr[h->top]=value;
        
    }
}
void pop (struct stack *h){
    if(iskhali(h)){
        printf("hey stack is empty\n");

    }
    else{
        h->top--;
    }
}
void display(struct stack *h,int &top){
        if(iskhali(h)){
            printf("empty\n");
        }
        else{
 printf("following are the elements of stack\n");
        for(int i=0;i<=top;i++){
        printf("%d\n",h->arr[i]);
        }
       
        }
    
}

int main (){
    struct stack *h = (struct stack*)malloc(sizeof(struct stack));
    h->top=-1; 
    h->size=10;
    h->arr=(int*)malloc((h->size)*sizeof(int));
    while(1){
        printf("Hi user choose from the following\n");
        printf("1=push\n");
        printf("2=pop\n");
        printf("3=display\n");
        printf("4=exit\n");
        int i;
        scanf("%d",&i);
         while (1) {
        printf("Hi user choose from the following\n");
        printf("1=push\n");
        printf("2=pop\n");
        printf("3=display\n");
        printf("4=exit\n");

        char i;
 scanf(" %c", &i);

 switch (i) {
    int n;
    case '1':
        printf("enter the value\n");
        scanf("%d", &n);
        push(h, n);
        break;
    case '2':
        pop(h);
        break;
    case '3':
        display(h, h->top);
        break;
    case '4':
    exit(0);
   
    }
}
return  0 ;

}
}