#include <stdlib.h>
#include <math.h>

typedef struct aresta
{
    int origem;
    int destino;
    int peso;
}Aresta;


typedef struct grafo
{
    int numArestas;
    Aresta** listaAdj;
}Grafo;

Grafo* grafoCria(int tm);

void insereAresta(Grafo* g, int origem, int destino, char caminho);