#include <stdio.h>
#include <stdlib.h>

struct normalqueue {
    int f;
    int r;
    int *arr;
    int size;
};

int isfull(struct normalqueue* q) {
    if ((q->r + 1) % q->size == q->f) {
        return 1;
    } else {
        return 0;
    }
}

int isempty(struct normalqueue* q) {
    if (q->f == q->r) {
        return 1;
    } else {
        return 0;
    }
}

void en(struct normalqueue* q, int data) {
    if (isfull(q)) {
        printf("the queue is full\n");
    } else {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = data;
        printf("the data entered is %d\n", data);
    }
}

void de(struct normalqueue* q) {
    if (isempty(q)) {
        printf("the queue is empty\n");
    } else {
       
        q->f = (q->f + 1) % q->size;
         printf("the data deleted is %d\n", q->arr[q->f]);
    }
}

void displayQueue(struct normalqueue* q) {
    if (isempty(q)) {
        printf("The queue is empty\n");
        return;
    }

   
    while (q->f!=q->r) {
    
     printf("%d ", q->arr[q->f]);
     q->f= q->f+ 1 % q->size;
    }
    printf("\n");
}

int main() {
    struct normalqueue* q = (struct normalqueue*)malloc(sizeof(struct normalqueue));
    q->f = q->r = 0;
    q->size = 5;
    q->arr = (int *)malloc(sizeof(int) * q->size);

    en(q, 10);
    en(q, 20);
    en(q, 30);
    en(q, 40);
    en(q, 50);
    de(q);
    de(q);
    de(q);
    en(q, 70);
    en(q, 30);
    en(q, 40);
    
    
    
    

    
   

   

  
    return 0;
}
