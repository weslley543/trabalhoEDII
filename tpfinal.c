#include <stdio.h>
#include <stdlib.h>

#include "tpfinal.h"

/*void chamaBusca (FILE *f, char chave){
    fseek(f, 1*sizeof(noB), SEEK_SET);
    buscaArvore(f, chave);
}*/


void buscaArvore (FILE *f, char chave, int *indice){
    int i=0;
    aux=fread()
    while(i<)
}




/*void buscaArvore(FILE *f, char chave){
    int i=-1;
    noB aux; 
    fread(&aux, sizeof(noB), 1, f);
    
    while(i<aux.nmerochaves && chave >aux.chave[i]){
        printf("while\n");
        i++;
        
       
    }
     if(chave == aux.chave[i]){
            printf("Achou !!\n");
            
    }
    else if(aux.folha){
            printf("Não tá aqui\n");
    }else{
        fseek(f,aux.ind[i]*sizeof(noB), SEEK_SET);
        fread(&aux, sizeof(noB), 1, f);
        return buscaArvore(f, chave);
    }
}
*/


/*void Pesquisa(TipoRegistro *x, TipoApontador Ap)
{ long i = 1;
  if (Ap == NULL) 
  { printf("TipoRegistro nao esta presente na arvore\n");
    return;
  }
  while (i < Ap->n && x->Chave > Ap->r[i-1].Chave) i++;
  if (x->Chave == Ap->r[i-1].Chave) 
  { *x = Ap->r[i-1];
    return;
  }
  if (x->Chave < Ap->r[i-1].Chave) 
  Pesquisa(x, Ap->p[i-1]);
  else Pesquisa(x, Ap->p[i]);
}*/ 