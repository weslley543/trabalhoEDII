#include 'tpfinal.h'

int main (void){
    FILE *f;
    f=fopen("teste.dat", "rb");
    if(f==NULL){
        printf("Erro ao abri o arquivo\n");
        exit(1);
    }
    
    buscaArvore(f, k);
    
    fclose(f);
    
    return 0;
    system('pause');
}