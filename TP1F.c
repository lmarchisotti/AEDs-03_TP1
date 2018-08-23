#include"TP1.h"

void leitura(){
    int i, j, n; 
    //int A, B;
    FILE *read;
    read = fopen ("dotscloud.txt","r");
    if (read == NULL){
        printf (" ERRO \n");
        exit (1);
    }
    fscanf(read, "%d %d %d", &n, &A, &B);
    struct point *leitura;
    leitura = (struct point*) malloc(sizeof(struct point)*n);

    printf("Existem %d pontos neste arquivo.\n\n",n);
    for ( i = 0 ; i < n ; i++){
        fscanf(read, "%d %d", &leitura[i].x, &leitura[i].y);
        leitura[i].Ia = ((double) atan (((double)leitura[i].y / (double)(leitura[i].x - A)))*(180/3.141592)); 
        leitura[i].Ib = ((double) atan (((double)leitura[i].y / (B - (double)leitura[i].x)))*(180/3.141592));
        leitura[i].q = 0;
    }

    printf("\n");
    fclose(read);
    return 0;
}

void shellsort (struct *vet, int n){
    int i , j , value;
    int gap = 1;
    while(gap < count) {
    gap = 3*gap+1;
    }
    while ( gap > 1) {
    gap /= 3;
        for(i = gap; i < count; i++) {
        value = vet[i];
        j = i - gap;
            while (j >= 0 && value < vet[j]) {
            vet [j + gap] = vet[j];
            j -= gap;
            }
        vet [j + gap] = value;
        }
    }
}

void Comparando (TRIANGULO *T, int n){
  for (i = 0; i < n; i++){
    for (j = i+1; j < n; j++){
      if (vet.INCA[i] < vet.INCA[j]){
        if (vet.INCB[i] < vet.INCB[j]){
          if (vet.Quant[i] >= vet.Quant[j]){
            vet.Quant[j] = vet.Quant[j] + vet.Quant[i];
          }
        }
      }
    }
  }
  for (i = 0; i < n; i++){
    if (vet.Quant[i] > QntMAX){
      QntMAX = vet.Quant[i];
    }
  }
}

void uniao(conjX, conjY, int x, int y){
    int i=0, n = 0;
    printf ("\nUnião dos conjuntos é:\n");

    conjAUX = malloc(sizeof(int)*(x+y));      // fazer um vetor com o tamanho dos dois vetores A e B.

    for (i = 0; i < x; i++){
        conjAUX[i] = conjX[i];
    }
    for (; i < x+y; i++){
        conjAUX[i] = conjY[n];
            n++;
    }
    // agora reduz o vetor
    n = 0;
    for (i = 0; i < x+y; i++){
        for ( int j = 0; j < i;j++){
            if ((conjAUX[i] == conjAUX[j]) && (conjAUX[i] != 0)){
            conjAUX[j] = 0;
            n++;
            }    
        }
    }

    conjU = malloc(sizeof(int)*x+y-n);

    n = 0;
    for (int i = 0; i < x+y; i++){
        if (conjAUX[i] != 0){
            conjU[n] = conjAUX[i];
            printf ("%d ", conjU[n]);
            n++;
        }
    }

    printf ("\n");
}

void intersecao(conjX, conjY, int x, int y){
    int i, n = 0;
    printf ("\nInterseção dos conjuntos:\n");

    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            if (conjX[i] == conjY[j]){
                n++;
            }
        }
    }

    conjAUX = malloc(sizeof(int)*n);
    n = 0;

    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            if (conjX[i] == conjY[j]){
                conjAUX[n] = conjY[j];
                n++;
            }
        }
    }
    if ( n == 0)
        printf ("Não houve interseção.\n");
    else{
        for (i = 0; i < n; i++){
        printf ("%d ",conjAUX[i]);
        }
    printf ("\n");
    }
    free(conjAUX);
}

void min(conjX, int x){
    int menor=1000, i=0;
    for(i=0 ; i<x ; i++){
        if(conjX[i] < menor){
            menor = conjX[i];
        }
    }
    printf("O menor elemento do conjunto é %d. \n\n", menor);
}

void max(conjX, int x){
    int maior=0, i=0;
    for(i=0 ; i<x ; i++){
        if(conjX[i] > maior){
            maior = conjX[i];
        }
    }
    printf("O maior elemento do conjunto é %d. \n\n", maior);
}

void imprimir(conjX, int x){
    int i=0;
    for(i=0 ; i<x ; i++){
        printf("%d ", conjX[i]);
    }
    printf("\n");
}
