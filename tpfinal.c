#include 'tpfinal.h'

void pegarDoArquivo(FILE *f){
    
}

void buscaArvore(FILE *f, char chave){
    int i=0;
    noB aux; 
    fread(aux, sizeof(noB), 1, f);
    
    while(i<aux.nmerochaves && chave >noB.chave[indice]){
        i++;
       
    }
     if(chave == noB.chave[indice]){
            printf("Achou !!\n");
            
        }
        if(chave.folha){
            return NULL;
        }else{
            FSEEK(f,aux.ind[i]*noB, SEEK_SET);
            fread(aux, sizeof(noB), 1, f);
            return buscaArvore(f, chave);
        }
}



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