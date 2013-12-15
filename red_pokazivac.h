#include <cstring>
#include <iostream>
using namespace std;
struct zapis{
        string ime,prezime;
        char spol;
        int d,m,g;
        int ai,bi,ci,di,ei;
};

struct tqu{
        zapis val;
        tqu *next;
};

struct queue{
        tqu *front,*rear;
};

queue *InitQ(queue *Q){
        Q = new queue;
        tqu *novi = new tqu;
        novi->next = NULL;
        Q->front = novi;
        Q->rear = novi;
        return Q;
}

bool IsEmptyQ(queue *Q){
        return Q->rear==Q->front;
}

zapis FrontQ(queue *Q){
        return Q->front->next->val;
}

void EnQueueQ(zapis x,queue *Q){
        tqu *novi = new tqu;
        novi->val = x;
        novi->next = NULL;
        Q->rear->next = novi;
        Q->rear = novi;
}

void DeQueueQ(queue *Q){
        tqu *del = Q->front;
        Q->front = Q->front->next;
        delete del;
}
