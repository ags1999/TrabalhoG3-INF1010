#include "grafo.h"

static int peso(char caminho)
{
    switch (caminho)
    {
    case 'M':
        return 100;

    case 'R':
        return 5;
    
    case '.':
        return 1;

    default:
        return 0;
    }
}

Grafo* grafoCria(int tm)
{
    Grafo* g = (Grafo*)malloc(sizeof(Grafo));
    g->listaAdj = (Aresta**)malloc(4*tm*sizeof(Aresta*));
    g->numArestas = 0;
}

void insereAresta(Grafo* g, int origem, int destino, char caminho)
{
    g->listaAdj[g->numArestas] = (Aresta*)malloc(sizeof(Aresta));
    g->listaAdj[g->numArestas]->origem = origem;
    g->listaAdj[g->numArestas]->destino = destino;
    g->listaAdj[g->numArestas]->peso = peso(caminho);
    g->numArestas++;
}



int valorColuna(int vertice, int tmLinha)
{
    return vertice/tmLinha;
}

int valorLinha(int vertice, int tmColuna)
{
    return vertice%tmColuna;
}

int valorVertice(int tmLinha, int linha, int coluna)
{
    return tmLinha*linha + coluna;
}

int distancia(Grafo* g,int origem, int destino, int tmColuna, int tmLinha)
{
    int distancia = 0;
    int origem_x = valorColuna(origem, tmColuna);
    int origem_y = valorLinha(destino, tmLinha);
    int destino_x = valorColuna(destino, tmColuna);
    int destino_y = valorLinha(destino, tmColuna);

    int valor_x = destino_x - origem_x;
    int valor_y = destino_y - origem_y;

    
    

}

void alg_a_estrela(Grafo* g)
{

}

