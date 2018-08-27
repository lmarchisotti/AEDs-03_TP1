#include "TP1.h"

void Shellsort (PONTO *vet, int count){
    
    int i , j;
    PONTO value;
    int gap = 1;
    
    while(gap < count) {
    gap = 3*gap+1;
    }
    while ( gap > 1) {
    gap /= 3;
        for(i = gap; i < count; i++) {
        value = vet[i];
        j = i - gap;
            while (j >= 0 && value.y < vet[j].y) {
            vet[j + gap] = vet[j];
            j -= gap;
            }
        vet[j + gap] = value;
        }
    }
}

void Comparacao (PONTO *vet, int n){
  int i,j;

  for (i = 0; i < n; i++){
    for (j = i+1; j < n; j++){
      if (vet[i].Ia < vet[j].Ia){
        if (vet[i].Ib < vet[j].Ib){
          if (vet[i].Quant >= vet[j].Quant){
            vet[j].Quant++;
          }
        }
      }
    }
  }
  for (i = 0; i < n; i++){
    if (vet[i].Quant > Qmax){
      Qmax = vet[i].Quant;
    }
  }
}
