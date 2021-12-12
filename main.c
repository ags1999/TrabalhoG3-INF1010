#include <stdio.h>
#include "grafo.h"

void mapear(FILE* input, char* arr);

#define tmLinha 40
#define tmColuna 82
#define tmMapa (tmLinha*tmColuna)

int ini = 0;

int leste(int i);
int oeste(int i);
int norte(int i);
int sul(int i);

int main(void)
{
    
    char mapa[tmMapa];
    FILE* input = fopen("mapa.txt", "r");
    mapear(input, mapa);

    int a = 0;
    return 0;
}

void mapear(FILE* input, char *arr)
{
    int i = 0;
    while (!feof(input))
    {
        
        char c = fgetc(input);
        if (c != '\n')
        {
            arr[i] = c;
            if (arr[i] == 'I')
            {
                ini = i;
            }
            i++;
            
            
        }   
    }
}

void inserir(Grafo* g, char* arr)
{

    for (int i = 0; i < tmMapa; i++)
    {
        
        insereAresta(g, i, leste(i), arr[leste(i)]);
        insereAresta(g, i, oeste(i), arr[oeste(i)]);
        insereAresta(g, i, norte(i), arr[norte(i)]);
        insereAresta(g, i, sul(i), arr[sul(i)]);
    }
    
}

int leste(int i)
{
    i += 1;
    if(i > tmMapa)
    {
        i -= tmMapa;
    }
    return i;
}

int oeste(int i)
{
    i -= 1;
    if(i < 0)
    {
        i += tmMapa;
    }
    return i;
}

int norte(int i)
{
    i -= 82;
    if(i < 0)
    {
        i += tmMapa - 82;
    }
    return i;
}

int sul(int i)
{
    i += 82;
    if(i > tmMapa)
    {
        i -= tmMapa + 82;
    }
    return i;
}

//gcc -Wall main.c -o main.exe