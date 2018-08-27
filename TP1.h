#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

typedef struct{ 
    int x;
    int y;
    double Ia;      // Inclinacao da aresta que liga o ponto a ancora a
    double Ib;      // Incliancao da aresta que liga o ponto a ancora b
    int Quant;      // Contador de pontos internos ao comparado
}PONTO;

int Qmax;
void Shellsort(PONTO *vet, int n);      // Funcao para ordenar de forma decrescente as coordenadas y
void Comparacao(PONTO *vet, int n);     // Funcao que faz a contagem dos triangulos internos
