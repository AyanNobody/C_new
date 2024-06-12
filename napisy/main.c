#include <stdio.h>
#include <stdlib.h>
// dodatkowe biblioteki
#include <string.h>
#include <wchar.h>

// to co by³o z napisów
int wyczysc_char(char *nap)
{
    nap[0]=0;
}

int wyczysc_wchar(wchar_t *nap)
{
    nap[0]=0;
}

int dlugosc_char(char *nap)
{
    int i=0;
    while(nap[i]!=0)
    {
        i++;
    }
    return i;
}

int dlugosc_wchar(wchar_t *nap)
{
    int i=0;
    while(nap[i]!=0)
    {
        i++;
    }
    return i;
}

int porownanie(char *napis1,char *napis2)
{
    int i;
    int dl1=dlugosc(napis1);
    int dl2=dlugosc(napis2);
    if(dl1==dl2)
        {
            for(i=0;i<=dl2-1;i++)
            {
                if(napis1[i]!=napis2[i])
                {
                    return 0;
                }
                return 1;
                }
                }
                else return 0;
}

int porownaj1(char *nap1,char *nap2)
{
    int i;
    for(i=0;(nap1[i]!=0)&&(nap2[i]!=0);i++)
    {
        if(nap1[i]!=nap2[i])
            return (nap1[i]<nap2[i]) ?1:0;
        if(nap1[i]!=0)
            return 0;
        else
            return 1;
        if (nap1[i] == 0 && nap2[i]!= 0) return -1;
        if (nap1[i]!= 0 && nap2[i] == 0) return 1;
    }
}

void przepisz(char*napis1,char*napis2)
{
    int i;
    for(i=0;i<dlugosc(napis1);i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[dlugosc(napis1)]=0;
}

void kopiujn(char*napis1,char*napis2,int n)
{
    int i;
    for(i=0;i<dlugosc(napis1)&&i<n;i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[i]=0;
}

void sklej_char(char *nap1,char *nap2,char *nap3)
{
    int i,j;
    for(i=0;nap1[i]!=0;i++)
    {
        nap3[i]=nap1[i];
    }
    for(j=0;nap2[j]!=0;i++,j++)
    {
        nap3[i]=nap2[j];
    }
    nap3[i]=0;
}

void sklej_wchar(wchar_t *nap1, wchar_t *nap2, wchar_t *nap3)
{
    int i, j;
    for (i = 0; nap1[i] != 0; i++)
    {
        nap3[i] = nap1[i];
    }
    for (j = 0; nap2[j] != 0; i++, j++)
    {
        nap3[i] = nap2[j];
    }
    nap3[i] = 0;
}

void male_duze(char *nap)
{
    int i;
    for(i=0;nap[i]!=0;i++)
    {
        if((nap[i]>='a')&&(nap[i]<='z'))
            nap[i]-=('a'-'A');
    }
}

void wytnij(char *nap,int n,int m)
{
    int i,dl;
    for(dl=0;nap[dl]!=0;dl++)
    {
        if(dl+1>m)
        {
            for(i=0;i+m<dl;i++)
            {
                nap[n+i]=nap[i+m+1];
            }
        }
        else
        {
            if((n<dl)&&(dl+1<=m))
                nap[n]=0;
        }
        }
    }
/*
bool porownaj_bool(char *nap1,char *nap2,int n)
{
    int i;
    for(i=0;(nap1[i]!=0)&&(nap2[i]!=0);i++)
    {
        if(nap1[n+1]!=nap2[i])
            return false;
        if(nap2[i]==0)
            return true;
        else
            return false;
    }
}
void wytnij2(char *nap1,char *nap2)
{
    int i,dl;
    for(dl=0;nap2[dl]!=0;dl++);
    for(i=0;nap1[i]!=0;i++)
        if(porownaj_bool(nap1,nap2,i))
        {
            wytnij(nap1,i,i+dl-1);
            return;
        }
}*/

void wytnij_wszystkie_znaki(char *nap1,char *nap2)
{
    int i,j;
    int wyst[256];
    for(i=0;nap2[i]!=0;i++)
        wyst[nap2[i]]=1;
    for(i=0,j=0;nap1[i]!=0;i++)
        if(wyst[nap1[i]]==0)
    {
        if(j<i)
            nap1[j]=nap1[i];
        j++;
    }
    nap1[j]=0;
}
/*
bool czywsyst(wchar_t z,wchar_t *nap)
{
    int i;
    for(i=0;nap[i]!=0;i++)
        if(nap[i]==z)
            return true;
        return false;
}
void wytnijzw2(wchar_t *nap1,wchar_t *nap2)
{
    int i,j;
    for(i=0,j=0;nap1[i]!=0;i++)
        if(!czywsyst(nap1[i],nap2))
    {
        if(j<i)
            nap1[j]=nap1[i];
        j++;
    }
    nap1[j]=0;
} */

void wytnijtm(wchar_t *nap1,wchar_t *nap2)
{
    int i,j;
    for(i=0,j=0;nap1[i]!=0;i++)
        if(nap1[i]!=nap2[i])
    {
        if(j<i)
            nap1[j]=nap1[i];
        j++;
    }
    nap1[j]=0;
}

void wypisz_char(char *nap)
{
    printf("%s\n",nap);
}

void wypisz_wchar(wchar_t *nap)
{
    printf("%ls",nap);
}

void wczytaj_char(char *nap)
{
    scanf("%s",nap);
}

void wczytaj_wchar(wchar_t *nap)
{
    scanf("%ls",nap);
}

char * pierwszy_char(char **tnap,int n)
{
    int i,min=0;
    char *wyn;
    for(i=1;i<n;i++)
    {
        if(stromo(tnap[min],tnap[i]>0))
            min =i;
        wyn = malloc((strlen(tnap[min]+1)*sizeof(char)));
        strcpy(wyn,tnap[min]);
        return wyn;
    }
}

wchar_t *pierwszy_wchar(wchar_t ** tnap,int n)
{
    int i,min=0;
    wchar_t *wyn;
    for(i=1;i<n;i++)
    {
        if(wcscmp(tnap[min],tnap[i])>0)
            min=i;
        wyn=malloc((wcslen(tnap[min])+1)*sizeof(wchar_t));
        wcscpy(wyn,tnap[min]);
        return wyn;
    }
}

string pierwszy_string(string *nap,int n)
{
    int i,min=0;
    for(i=1;i<n;i++)
    {
        if(nap[min]>nap[i])
            min=i;
        return nap[min];
    }
}

char *data(int godz,int min,int sek)
{
    char * wynik=malloc(9*sizeof(char));
    sprintf(wynik,"%02d:%02d:%02d",godz,min,sek);
    return wynik;
}
char *anagran(char *napis)
{
    int i=0,j=0;
    while(napis[i]!="0")\
    {
        i++;
    }
    char temp = napis[i];
    for(j=0;j<i/2;j++)
    {
        napis[i]=napis[i-j-1];
        temp = napsis[i-j-1];
    }
    return napis;
}
int main()
{
/*
    char *napis="pieczewo";
    printf(napis);
    printf("\n");
    dlugosc(napis);
    printf("co wyswietli po wyczyszceniu\n");
   printf("%d\n",porownanie("wziasc","wziazc"));
   printf("%d\n",porownaniewsl("sam","sama"));
   printf("%d\n",porownaniewsl("matematyka","matematyka"));
   printf("%d\n",porownanie("wziasc","wziazc"));


   char* pier="arbuz";
   char dwa[20]="arbiter";
   int n=1;
   wypisz(pier);
   wypisz(dwa);
   przepisz(pier,dwa);
   wypisz(pier);
   wypisz(dwa);
   char* n1="informatyka";
   char n2[20]="matematyka";
   char n3="";

   sklej(n1,n2,n3);
   wypisz(n3);
   kopiujn(n1,n2,6);
   wypisz(n1);
   wypisz(n2);



    char n1[50] ="CzterY";
    podmien(n1);
    printf(n1); */ /*
    char *tnap[] = {"hello", "world", "abc", "def", "xyz"};
    int n = sizeof(tnap) / sizeof(tnap[0]);
    char *result = pierwszy(tnap, n);
    printf("The lexicographically smallest string is: %s\n", result);
    free(result); */ /*
    setlocale(LC_ALL, ""); // Set locale to use wide characters
    wchar_t *tnap[] = {L"hello", L"world", L"abc", L"def", L"xyz"};
    int n = sizeof(tnap) / sizeof(tnap[0]);
    wchar_t *result = pierwszy_wchar(tnap, n);
    if(result != NULL) {
        fwprintf(stdout, L"The lexicographically smallest string is: %ls\n", result);
        free(result);
    } */
    return 0;
}
