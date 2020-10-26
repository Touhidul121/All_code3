#include<bits/stdc++.h>
using namespace std;

struct Queue
{
    int size1;
    int front1;
    int rear1;
    int *Q;
};

void create(struct Queue *q,int size)

{
    q->size1=size;
    q->front1=q->rear1=0;
    q->Q=(int*)malloc(q->size1*sizeof(int));
}

void enqueue(struct Queue *q,int x)
{
    if((q->rear1+1)%q->size1==q->front1)
    {
        cout<<"Queue is Full"<<endl;
    }
    else
    {
        q->rear1=(q->rear1+1)%q->size1;
        q->Q[q->rear1]=x;
    }
}

int dequeue(struct Queue *q)
{
    int x=-1;
    if(q->front1==q->rear1)
        cout<<"Queue is empty"<<endl;
    else
    {
        q->front1=(q->front1+1)%q->size1;
        x=q->Q[q->front1];
    }
    return -1;
}

void Display(struct Queue q)
{
    int i=q.Q[q.front1+1];

    do
    {
        cout<<q.Q[i]<<" ";
        i=(i+1)%q.size1;
    }while(i!=(q.rear1+1));
}
int main()
{
 struct Queue q;
 create(&q,6);


 enqueue(&q,1);
 enqueue(&q,2);
 enqueue(&q,3);
 enqueue(&q,4);
 Display(q);
 enqueue(&q,16);
 cout<<endl;
 Display(q);
}
