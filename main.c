#include "tpfinal.h"

int main (void){
    FILE *f;
    f=fopen("teste.dat", "rb");
    if(f==NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }
    /*noB no4, no5, no6;
    fseek(f,1*sizeof(noB), SEEK_SET);
    fread(&no4, sizeof(noB), 1, f);
    printf("Numero de Chaves : %d, Folha : %d, Chave : %c, Indice :%d,Indice : %d\n", no4.nmerochaves, no4.folha, no4.chave[0], no4.ind[0],no4.ind[1]);

    fseek(f,no4.ind[0]*sizeof(noB), SEEK_SET);
    fread(&no5, sizeof(noB), 1, f);
    printf("Numero de Chaves : %d, Folha : %d, Chave : %c, Chave : %c\n", no5.nmerochaves, no5.folha, no5.chave[0], no5.chave[1]);

    fseek(f,no4.ind[1]*sizeof(noB), SEEK_SET);
    fread(&no6, sizeof(noB), 1, f);
    printf("Numero de Chaves : %d, Folha : %d, Chave : %c, Chave : %c\n", no6.nmerochaves, no6.folha, no6.chave[0], no6.chave[1]);
    */
    
    //chamaBusca(f, 'G');
    chamaBusca(f, 'M');
    fclose(f);
    
    return 0;
    
}