#include <iostream>
#include <cstring>
using namespace std;

struct zapis{
        string ime,prezime;
        char spol;
        int d,m,g;
        int ai,bi,ci,di,ei;
};

struct queue{
        zapis val[10000];
        int front,rear;
};

int AddOne(int n){
        return ((n+1)%10000);
}

queue *InitQ(queue *Q){
        Q = new queue;
        Q->front = 0;
        Q->rear = 9999;
        return Q;
}

bool IsEmptyQ(queue *Q){
        if(AddOne(Q->rear)==Q->front) return true;
        return false;
}

zapis FrontQ(queue *Q){
        return Q->val[Q->front];
}

void EnQueueQ(zapis x,queue *Q){
        Q->rear = AddOne(Q->rear);
        Q->val[Q->rear] = x;
}

void DeQueueQ(queue *Q){
        Q->front = AddOne(Q->front);
}
 
