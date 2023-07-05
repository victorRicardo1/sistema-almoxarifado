#include <stdio.h>

//Alunos: Ricardo Victor, Gustavo Celso, Davi Souza;

struct CDfornecedor {
    int codigo;
    char nome[40];
} fornecedor[10];

struct CDmaterial {
    int codigo;
    char nome[40];
    char descricao[100];
    float precoUnit;
    int quantidade;
    struct CDfornecedor codigoFornecedor;
} material[10];

struct CDlocacao {
	char nome[40];
    char data[11];
    int codigo;
    struct CDmaterial codigoMaterial;
} locacao[10];

void cadastros() {
    int i, ex, j, h, g;
    printf("=======CADASTRO FORNECEDOR=======\n\n");
    
    for (i = 0; i < 10; i++) {
        printf("\n---FORNECEDOR %d---\n", i + 1);
        printf("Nome: ");
        fflush(stdin);
        gets(fornecedor[i].nome);
        printf("Codigo: ");
        scanf("%d", &fornecedor[i].codigo);
        printf("\nDeseja continuar? '00' para sair e qualquer tecla numerica para continuar: \n");
        scanf("%d", &ex);
        if (ex == 00) {
        	break;
        }
    }
    
    printf("\n\n=======CADASTRO MATERIAL=======\n\n");
    
    for(h = 0; h<10;h++){
    	 printf("\n---MATERIAL %d---\n", h + 1);
    	 printf("Nome: ");
    	 fflush(stdin);
    	 gets(material[h].nome);
    	 printf("Codigo: ");
    	 scanf("%d", &material[h].codigo);
    	 printf("Descri��o: ");
    	 fflush(stdin);
    	 gets(material[h].descricao);
    	 printf("Preco unitario: ");
    	 scanf("%f", &material[h].precoUnit);
    	 printf("Quantidade: ");
    	 scanf("%d", &material[h].quantidade);
    	 printf("Codigo do Fornecedor: ");
    	 scanf("%d", &material[h].codigoFornecedor.codigo);
    	 
    	printf("\nDeseja continuar? '00' para sair e qualquer tecla numerica continuar: \n");
        scanf("%d", &ex);
        if (ex == 00) {
        	break;
        }
	}
	
	printf("\n\n=======CADASTRO LOCACAO=======\n\n");
	
	for(g = 0; g<10;g++){
		printf("\n---LOCACAO %d---\n", g + 1);
		printf("Nome: ");
		fflush(stdin);
		gets(locacao[g].nome);
		printf("Codigo: ");
		scanf("%d", &locacao[g].codigo);
		printf("Data: ");
		fflush(stdin);
		gets(locacao[g].data);
		printf("Codigo do material: ");
		scanf("%d", &locacao[g].codigoMaterial.codigo);

		printf("\nDeseja continuar? '00' para sair e qualquer tecla numerica continuar: \n");
        scanf("%d", &ex);
        if (ex == 00) {
        	break;
        }
	}
	printf("\n\n=======MENU CADASTRO=======\n\n");
	for(j=0;j<=i;j++){
    	printf("\n\n---CADASTRO %d---\n\n", j +1);
    	printf("=Fornecedor: %s\n", fornecedor[j].nome);
    	printf("=Codigo Fornecedor: %d\n", fornecedor[j].codigo);
    	printf("=Material fornecido: %s\n", material[j].nome);
    	printf("=Codigo Material: %d\n", material[j].codigo);
    	printf("=Descricao: %s\n", material[j].descricao);
    	printf("=Preco unitario: %.2f\n", material[j].precoUnit);
    	printf("=Quantidade: %d\n", material[j].quantidade);
    	printf("=Nome Locacao: %s\n", locacao[j].nome);
    	printf("=Codigo Locacao: %d\n", locacao[j].nome);
    	printf("=Data Locacao: %s\n", locacao[j].data);
    	printf("uepa");
	}
}

int main() {
	int i, j;
    printf("\n----------SISTEMA ALMOXARIFADO----------\n\n");
    printf("-------------BEM VINDO----------------\n\n");
    cadastros();	
	return 0;
}
