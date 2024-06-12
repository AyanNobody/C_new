#include <stdio.h>
#include <stdlib.h>
void uciec_napis(char *napis1, char *napis2) {
    int i = 0;
    while (napis1[i]!= '\0') {
        i++;
    }
    if (i > 1) {
        i--;
        for (int j = 0; j < i; j++) {
            napis2[j] = napis1[j];
        }
        napis2[i] = '\0';
    } else {
        napis2[0] = '\0';
    }
}

int liczba_a(char *napis) {
    int ilosc_a = 0;
    while (*napis != '\0') {
        if (*napis == 'a') {
            ilosc_a++;
        }
        napis++;
    }
    return ilosc_a;
}

int **alokuj(unsigned int n,unsigned int m)
{
    int **t=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        t[i]=malloc(m*sizeof(int));
    }
    return t;
}

void wczytaj(int **t, unsigned int n, unsigned int m){
int i,j;
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%d",&t[i][j]);
    }
}
}
void wypisz(int **t, unsigned int n, unsigned int m){
int i,j;
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d\t",t[i][j]);
    }
    printf("\n");
}
}
int slad(int **macierz, int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += macierz[i][i];
    }
    return suma;
}

void usun_wiersz_kolumne(int **macierz, int n, int m, int p, int r) {
    for(int i = 0; i < n; i++) {
        if(i != p) {
            for(int j = 0; j < m; j++) {
                if(j != r) {
                    printf("%d ", macierz[i][j]);
                }
            }
            printf("\n");
        }
    }
}

struct element
{
    int i;
    struct element * next;
};
struct element *utworz()
{
    return NULL;
};
struct element *dodaj_element_poczatek(struct element *Lista,int r){
    struct element *wsk=malloc(sizeof(struct element));
    wsk->i=r;
    wsk->next=Lista;
    return wsk;
};
struct element *dodaj_element_koniec(struct element *Lista,int r)
{
    struct element *wsk;
    if(Lista = NULL)
    {
        Lista=wsk=malloc(sizeof(struct element));
    }
    else
    {
        wsk=Lista;
        while(wsk->next !=NULL)
        {
            wsk=wsk->next;
        }
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
        return Lista;
    }
};
void wypisz1(struct element *Lista)
{
    while(Lista!=NULL)
    {
        printf("%d\n",Lista->i);
        Lista=Lista->next;
    }
    printf("\n");
}
int liczba_parzystych(struct element *Lista) {
    int liczba = 0;
    while (Lista!= NULL) {
        if (Lista->i % 2 == 0) {
            liczba++;
        }
        Lista = Lista->next;
    }
    return liczba;
}
struct element *utworzglowe()
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->next=NULL;
    return wsk;
};
double srednia_arytmetyczna(struct element *Lista) {
    int suma = 0;
    int liczba_elementow = 0;
    struct element *wsk = Lista->next; // pomijamy g³owê listy

    while (wsk!= NULL) {
        suma += wsk->i;
        liczba_elementow++;
        wsk = wsk->next;
    }

    if (liczba_elementow == 0) {
        return 0.0; // lista jest pusta
    }

    return (double)suma / liczba_elementow;
}
int main()
{ /*
    char napis1[] = "Informatyzacja";
    char napis2[20]; // musi byæ wystarczaj¹co du¿o miejsca

    uciec_napis(napis1, napis2);

    printf("%s\n", napis2); // wyœwietli "Informatyzacj"*/ /*

    char napis[] = "baobab";

    int ilosc_a = liczba_a(napis);

    printf("%d\n", ilosc_a); // wyœwietli 2 */
    // nie dzia³a
    /*
    int **t=alokuj(3,3);
    wczytaj(t,3,3);
    wypisz(t,3,3);

    int slad_macierzy = slad((int **)t, 3);

    printf("%d\n", slad_macierzy); // wyœwietli 13 *//*

    int n = 3;
    int m = 4;
    int p = 1;
    int r = 0;

    int **macierz = alokuj(n,m);
    wczytaj(macierz,n,m);

    usun_wiersz_kolumne((int **)macierz, n, m, p, r);*/
    /*
    struct element *Lista = utworz();
    Lista = dodaj_element_poczatek(Lista, 1);
    Lista = dodaj_element_poczatek(Lista, 2);
    Lista = dodaj_element_poczatek(Lista, 3);
    Lista = dodaj_element_poczatek(Lista, 4);
    Lista = dodaj_element_poczatek(Lista, 5);

    wypisz1(Lista);
    printf("%d\n",liczba_parzystych(Lista));*/

     struct element *Lista = utworzglowe();
    Lista->next = dodaj_element_poczatek(Lista->next, 1);
    Lista->next = dodaj_element_poczatek(Lista->next, 2);
    Lista->next = dodaj_element_poczatek(Lista->next, 3);
    Lista->next = dodaj_element_poczatek(Lista->next, 4);
    Lista->next = dodaj_element_poczatek(Lista->next, 5);

    wypisz1(Lista->next);

    double srednia = srednia_arytmetyczna(Lista);
    printf("Œrednia arytmetyczna elementów listy: %f\n", srednia);

    return 0;
}
