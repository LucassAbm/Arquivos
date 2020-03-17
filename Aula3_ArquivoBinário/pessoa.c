#include <stdio.h>
#include <string.h>

// #pragma pack(1)

struct Pessoa
{
    char nome[41];
    int idade;
    float peso; 
};


int main()
{
    FILE *f;
    struct Pessoa p;

    memset(&p,0,sizeof(struct Pessoa));

    strcpy(p.nome,"Renato");
    p.idade = 46;
    p.peso = 100.1;

    f = fopen("eu.dat", "w");
    fwrite(&p,sizeof(struct Pessoa),1,f);
    fclose(f);
    return 0;
}