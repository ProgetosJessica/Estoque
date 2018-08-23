#include <stdio.h>
#include <stdlib.h>
#define QTD 

// Estrutura Estoque
typedef struct
{
        int Estoque[QTD];
        int PedidoEstoque[QTD];
        int ItemPedidoEstoque[QTD];
        int Filial;
        int Produto;
        
    
}Estoque;

//Estrutura Pedidos
typedef struct
{
        int cod_produto;
        int qtd;
}PedidoEstoque;


int main()
{
     Estoque estoque[QTD];
     PedidoEstoque PedidoEstoque[QTD];
     int i;
     
     do{
                    printf("ENTRE COM O CODIGO:");
                    scanf("%d",&estoque[i].Produto);
                    printf("\n\n");
                    printf("ENTRE COM A QUANTIDADE EXISTENTE NO ESTOQUE:");
                    scanf("%d",&estoque[i].PedidoEstoque);
                    printf("\n\n");
                
                    printf("\n\n");
     }while (estoque[i].cod_produto != 0);

     do{
                  
                    printf("ENTRE COM O PRODUTO:");
                    scanf("%d",&pedido[i].cod_produto);
                    printf("\n\n");
                    printf("ENTRE COM A QUANTIDADE:");
                    scanf("%d",&pedido[i].qtd;);
                    printf("\n\n");
     }while (pedido[i].Estoque != 0);

     for(i=0;i<QTD;i++)
     {

                       if(pedido[i].cod_produto == estoque[i].estoque)
                       {
                       printf("PRODUTO VENDIDO;");
                       estoque[i].estoque--;
                       scanf("%d",estoque[i].estoque);
                       }
                                                      else
                                                      {
                                                      printf("NÃO TEMOS A MERCADORIA EM ESTOQUE SUFICIENTE: %d",pedido[i].cod_cliente);
                                                      }
     }
     system("pause");
    
    
    
    

    return (0);
}

