// Aluno: Lucas Marchisotti de Souza            Matricula: 172050060 
//        Marlon Silveira                                  172050073
// Trabalho Pratico 1 - Nuvem de pontos

#include"TP1.h"

int main(){

int i, j, n, A, B;
PONTO aux;

    FILE *read;
    read = fopen ("dotscloud.txt","r");
    if (read == NULL){
        printf (" ERRO \n");
        exit (1);
    }
    fscanf(read, "%d %d %d", &n, &A, &B);
    PONTO *leitura = (PONTO*) malloc(sizeof(PONTO)*n);

    printf("Existem %d pontos neste arquivo.\n\n",n);
    for ( i = 0 ; i < n ; i++){
        fscanf(read, "%d %d", &leitura[i].x, &leitura[i].y);
        leitura[i].Ia = ((double) atan (((double)leitura[i].y / (double)(leitura[i].x - A)))*(180/3.141592)); 
        leitura[i].Ib = ((double) atan (((double)leitura[i].y / (B - (double)leitura[i].x)))*(180/3.141592));
        leitura[i].Quant = 1;
    }

    Shellsort(leitura, n);
    Comparacao(leitura, n);

    printf ("Quantidade máxima de pontos internos: %d", Qmax);
    printf("\n");
  
    fclose(read);
    return 0;
}
