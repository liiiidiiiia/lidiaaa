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
struct telement{
        tpacijent pacijent;
        telement *sljedeci;
};
struct tred{
        telement *front ,*rear;
};
typedef tred queue;
typedef telement* element;

tpacijent frontQ(queue *Q){
        return Q->front->sljedeci->pacijent;
}
void enqueueQ(tpacijent x, queue *Q){
    Q->rear->sljedeci=new telement;
        Q->rear=Q->rear->sljedeci;
        Q->rear->sljedeci=NULL;
        Q->rear->pacijent=x;
}
void dequeueQ(queue *Q){
        element pom=Q->front;
        Q->front=pom->sljedeci;
        delete pom;
}
void initQ(queue *Q){
        Q->front=new telement;
        Q->rear=Q->front;
}
bool IsEmptyQ(queue *Q){
        return (Q->rear==Q->front)?  1:0;
}
