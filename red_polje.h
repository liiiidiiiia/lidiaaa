#define N 1000
#include<iostream>
using namespace std;

struct tdatum{
         int dan,mjesec, godina;
};
struct tpacijent{
        char ime[8];
        char prezime[8];
        tdatum datum;
        char spol;
        int ai,bi,ci,di,ei;
};
struct tred{
        tpacijent polje[N];
        int front,rear;
};
typedef int element;
typedef tred queue;

int AddOne(int n) { 
return((n+1)%1000); 
}

tpacijent frontQ(queue *Q){
        return Q->polje[Q->front];
}

void enqueueQ(tpacijent x, queue *Q){
        Q->rear=AddOne(Q->rear);
        Q->polje[Q->rear]=x;
}
void dequeueQ(queue *Q){
        Q->front=AddOne(Q->front);
}
void initQ(queue *Q){
        Q->front=0;
        Q->rear=N-1;
}
bool IsEmptyQ(queue *Q){
        return (AddOne(Q->rear)==Q->front)? 1:0;
}
