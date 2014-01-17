struct osoba {
    int ai,bi,ci,di,ei;
    int datum;
    char ime[25],prezime[30],spol[1];
    osoba*sljedeci;
};

struct tred {
    osoba* front, *rear;
};

int AddOne(int n) {
    return((n+1)%10000);
}

int InitQ(tred*red) {
    osoba*glava=new osoba;
    glava->sljedeci=NULL;
    red->front=glava;
    red->rear=glava;
}

bool IsEmptyQ(tred*red) {
    if(red->rear==red->front)return 1;
    return 0;
}

osoba*FrontQ(tred*red) {
    osoba*pacijent;
    pacijent=red->front->sljedeci;
    return pacijent;
}

void EnQueueQ(osoba*pacijent, tred*red) {
        red->rear->sljedeci=new telement;
        red->rear=red->rear->sljedeci;
        red->rear->sljedeci=NULL;
        red->rear->pacijent=pacijent;
}

void DeQueueQ(tred*red) {
        element pom=red->front;
        red->front=pom->sljedeci;
        delete pom;
}
