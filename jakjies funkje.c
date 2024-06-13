#include <stdio.h>
#include <stdlib.h>

void wypisz2(int **t,unsigned int n,unsigned int m)
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

void wczytaj2(unsigned int n,unsigned int m,int t[n][m])
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

void zwolnij(unsigned int n,unsigned int m,int **t)
{
    int i;
    for(i=0;i<n;i++)
    {
        free(t[i]);
    }
    free(t);
}

int **alokujtrojkatna(unsigned int n)
       {
           int **t=malloc(n*sizeof(int*));
           int i;
           for(i=0;i<n;i++)
           {
               t[i]=malloc((i+1)*sizeof(int));
           }
           return t;
       }


void zeruj3(unsigned int n,unsigned int m,int t[][m])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            t[i][j]=0;
        }
    }
}
void zapelnij(unsigned int n,unsigned int m,int t[][m])
{
    int i,j,g=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            t[i][j]=g;
            g++;
        }
    }
}
//Dziala
int suma(unsigned int n,unsigned int m,int t[][m])
{
    int i,j,sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum+=t[i][j];
        }
    }
    return sum;
}
//Dziala
int srednia_z_wiersza(unsigned int n,unsigned int m,int t[][m])
{
    int i,j,sum=0,max,indeks;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum+=t[i][j];
        }
        if(max<sum)
        {
            max=sum;
            indeks=i;
            sum=0;
        }
    }
    return indeks;
}
int main()
{
    int t[33][33];
    printf("%d\n",srednia_z_wiersza(33,33,t));
    return 0;
}
