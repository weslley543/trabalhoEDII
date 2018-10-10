#include 'tpfinal.h'

int main (void){
    FILE *f;
    f=fopen("arq.dat", "rb");
    if(f==NULL){
        printf("Erro ao abri o arquivo\n");
        exit(1);
    }
    int indice;
    buscaArvore(f, k, &indice);
    fclose(f);
    return 0;
    system('pause');
}