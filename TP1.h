#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

struct point{ 
    int x;
    int y;
    double Ia;      // Inclinacao da aresta que liga o ponto a ancora a
    double Ib;      // Incliancao da aresta que liga o ponto a ancora b
    int q;          // Contador de pontos internos ao comparado
}ponto;

struct anchor{
    int A;
    int B;
}ancora;

int Qmax;

void Leitura();                         // Funcao para pegar os pontos do arquivo e guardar no programa
void CInclinacao(ponto *vet);                     // Funcao que calcula a inclinacao da aresta que ligam o ponto a ancora A e B
void shellsort(ponto *vet, int n);      // Funcao para ordenar de forma decrescente as coordenadas y
void comparacao();  
