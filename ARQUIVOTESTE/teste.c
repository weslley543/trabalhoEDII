#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
        [Q]
        /  \
    [MN]    [RS]

    Arvore gerada para o teste.
*/
#define GRAUMIN 2
typedef struct nob{
    int nmerochaves;
    bool folha;
    char chave[2*GRAUMIN-1];
    char ind[2*GRAUMIN];
}noB;
int main (void){
    noB no1, no2, no3, no4, no5, no6;
    FILE *f;

    f=fopen("teste.dat", "wb+");
    no1.nmerochaves=1;
    no1.folha=false;
    no1.chave[0]='Q';
    no1.ind[0]=2;
    no1.ind[1]=3;

    no2.nmerochaves=2;
    no2.folha=true;
    no2.chave[0]='M';
    no2.chave[1]='N';

    no3.nmerochaves=2;
    no3.folha=true;
    no3.chave[0]='R';
    no3.chave[1]='S';

    fseek(f, 1*sizeof(noB), SEEK_SET);
    fwrite(&no1, sizeof(noB), 1, f);

    fseek(f, no1.ind[0]*sizeof(noB), SEEK_SET);
    fwrite(&no2, sizeof(noB), 1, f);

    fseek(f, no1.ind[1]*sizeof(noB), SEEK_SET);
    fwrite(&no3, sizeof(noB), 1, f);


    rewind(f);
    fseek(f,1*sizeof(noB), SEEK_SET);
    fread(&no4, sizeof(noB), 1, f);
    printf("Numero de Chaves : %d, Folha : %d, Chave : %c, Indice :%d,Indice : %d\n", no4.nmerochaves, no4.folha, no4.chave[0], no4.ind[0],no4.ind[1]);

    fseek(f,no4.ind[0]*sizeof(noB), SEEK_SET);
    fread(&no5, sizeof(noB), 1, f);
    printf("Numero de Chaves : %d, Folha : %d, Chave : %c, Chave : %c\n", no5.nmerochaves, no5.folha, no5.chave[0], no5.chave[1]);

    fseek(f,no4.ind[1]*sizeof(noB), SEEK_SET);
    fread(&no6, sizeof(noB), 1, f);
    printf("Numero de Chaves : %d, Folha : %d, Chave : %c, Chave : %c\n", no6.nmerochaves, no6.folha, no6.chave[0], no6.chave[1]);
    
    fclose(f);

    return 0;
    


}