#ifndef ESTOQUE_H
#define ESTOQUE_H

#define MAX_ITENS 50
#define TAXA_PADRAO 0.05

typedef struct {
    int id;
    char codigo_barras[20];
    char nome[30];
    float preco;
    int quantidade;
} Produto;

void exibir_menu(void);
void listar_produtos(Produto lista[], int total);
float calcular_total(Produto lista[], int total);

#endif
