#include <stdio.h>
#include <stdlib.h>

int wyczysc_napis(char *nap)
{
    nap[0]=0;
}

int dlugosc_napis(char *nap)
{
    int i=0;
    while(nap[i]!=0)
    {
        i++;
    }
    return i;
}

int porownaj_napisy(char* nap,char *nap2)
{
    int i=0;
    while(nap[i]!=0 || nap2[i]!=0)
    {
        if(nap[i]!=nap2[i])
            {return 0;}
        i++;
    }
    return 1;
}
void przepisz_napis_do_nap2(char * nap,char *nap2)
{
    int i=0;
    while(nap[i]!=0)
    {
        nap2[i]=nap[i];
        i++;
    }
}
void przepisz_n_znakow_do_nap2(char * nap,char *nap2,int n)
{
    int i=0;
    for(;i<n;i++)
    {
        nap2[i]=nap[i];
    }
    nap2[i]=0;
}
void doklej_napis(char * nap,char *nap2)
{
    int i=0;
    int nap_len=dlugosc_napis(nap);
    while(nap[i]!=0)
    {
        nap[i+nap_len]=nap2[i];
        i++;
    }
    nap[i+nap_len]=0;
}

void zmien_wielkosc_liter_na_duze(char *nap)
{
    int i=0;
    int a=97;
    int b=122;

    while(nap[i]!=0)
    {
        if(nap[i]>=a && nap[i]<=b)
            nap[i]-=32;

        i++;
    }
}
void zmien_wielkosc_liter_na_male(char *nap)
{
    int i=0;
    int a=65;
    int b=90;

    while(nap[i]!=0)
    {
        if(nap[i]>=a && nap[i]<=b)
            nap[i]+=32;

        i++;
    }
}

char* wytnij(char* nap,int n,int m)
{
    char *n_nap = malloc(m-n+2);
    int i=0;
    for(;n<=m;i++,n++)
    {
        n_nap[i]=nap[n];
    }
    n_nap[i]=0;
    return n_nap;
}

int** alokuj_tt(unsigned int n, unsigned int m)
{
    int** t=malloc(n*sizeof(int*));
    int i;
    for(i=0;i<n;i++)
        t[i]=malloc(m*sizeof(int));
    return t;
}
struct element{
int i;
struct element * next;
};

struct element * dodaj_el(struct element * lista,int a){
struct element * wsk=malloc(sizeof(struct element));
wsk->i=a;
wsk->next=lista;
return wsk;
};



void wypisz_tt(int **t,unsigned int n,unsigned int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
}
void wczytaj_tt(int **t,unsigned int n,unsigned int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d\t",&t[i][j]);
        }
    }
}
void wczytaj_td(unsigned int n,unsigned int m,int t[][m])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;i<m;j++)
        {
        scanf("%d",&t[i][j]);
        }
    }
}
void wypisz_td(unsigned int n,unsigned int m,int t[][m])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;i<m;j++)
        {
        printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
}


int main()
{

return 0;
}
