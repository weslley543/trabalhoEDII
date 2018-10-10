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

void chamaBusca (FILE *f, char chave);
void buscaArvore(FILE *f, char chave);