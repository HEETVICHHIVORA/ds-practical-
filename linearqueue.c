#include <stdio.h>
#include <stdlib.h>
struct que
{
    int f;
    int r;
    int *arr;
    int size;
};
int full(struct que *q)
{
    if (q->r == q->size - 1)
    {
        return 1; // Queue is full
    }
    else
    {
        return 0; // Queue is not full
    }
}
int empty(struct que *q)
{
    if (q->f == q->r == -1)
    {
        return 1; // Queue is empty
    }
    else
    {
        return 0; // Queue is not empty
    }
}
void display(struct que *q)
{
    if (empty(q))
    {
        printf("nothing to display\n");
    }
    else
    {
        for (int i = q->f + 1; i <= q->r; i++)
        {
            printf("%d ", q->arr[i]);
        }
        printf("\n");
    }
}
void pop(struct que *q)
{
    if (empty(q))
    {
        printf("bhai aatma nikaal le an bas\n");
    }
    else
    {
        q->f = q->f + 1;
    }
}
void push(struct que *q, int val)
{

    if (full(q))
    {
        printf("kaha dalega aur bhai \n");
    }
    else
    {
        q->r = q->r + 1;
        q->arr[q->r] = val;
    }
}
int main()
{

    struct que *q = (struct que *)malloc(sizeof(struct que));
    q->f = -1;
    q->r = -1;
    q->size = 5;
    q->arr = (int *)malloc(sizeof(int) * q->size);
    push(q, 5);
    push(q, 4);
    push(q, 3);
    push(q, 2);
    push(q, 2);

    display(q);
    pop(q);
    display(q);

    return 0;
}