
#include <stdio.h>
#include <stdlib.h>

// Estoque
typedef struct
{
        int Estoque[100];
        int PedidoEstoque[];
        int ItemPedidoEstoque[];
        int Filial;
        int Produto;
        
    
}Estoque;

//Pedidos do Estoque
typedef struct
{
        int cod_produto;
        int qtd;
}PedidoEstoque;


//Filial
typedef struct
{
        int Id_filial;
        
}Filial;




int main() {

    
     Estoque estoque[100];
     PedidoEstoque PedidoEstoque[];
     Filial Filial[];
     int i;
     
        do{
                    printf("Digite codigo do produto:");
                    scanf("%i",&estoque[i].Produto);
                    printf("\n\n");
                    printf("ENTRE COM A QUANTIDADE EXISTENTE NO ESTOQUE:");
                    scanf("%i",&estoque[i].PedidoEstoque);
                    printf("\n\n");
                    printf ("DIGITE A FILIAL");
                    scanf ("%i", &Filial[i].Id_filial);
                     printf("\n\n");
     }while (estoque[i].Produto != 0);
       
     
     do{
                    printf("ENTRE COM O PRODUTO:");
                    scanf("%d",&PedidoEstoque[i].cod_produto);
                    printf("\n\n");
                    printf("ENTRE COM A QUANTIDADE:");
                    scanf("%d",&PedidoEstoque[i].qtd);
                    printf("\n\n");
     }while (PedidoEstoque[i].Estoque != 0);
    
     
    return (0);
}

