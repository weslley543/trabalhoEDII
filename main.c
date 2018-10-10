#include "tpfinal.h"

int main (void){
    FILE *f;
    f=fopen("teste.dat", "rb");
    if(f==NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }
    
    chamaBusca(f, 'G');
    
    fclose(f);
    
    return 0;
    
}