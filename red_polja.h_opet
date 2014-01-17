#include <iostream>

using namespace std;

struct osoba {
    int ai,bi,ci,di,ei;
    int datum;
    char ime[25],prezime[30],spol[1];
    osoba*sljedeci;
};

int AddOne(int n) {
    return((n+1)%10000);
}

struct tred {
    osoba*pacijent[10000];
    int front,rear;
};

osoba*FrontQ(tred*red) {
    return red->pacijent[red->front];
}

void EnQueueQ (osoba*pacijent, tred *red) {
    if (AddOne(AddOne(red->rear))==(red->front))
        cout<<"Red je pun."<<endl;
    else {
        red->rear=AddOne(red->rear);
        red->pacijent[red->rear]=pacijent;
    }
}

int IsEmptyQ(tred*red) {
    if(AddOne(red->rear)==red->front)return 1;
    return 0;
}

void DeQueueQ(tred*red) {
    red->front++;
}

void InitQ(tred*red) {
    red->front=0;
    red->rear=9999;
}
