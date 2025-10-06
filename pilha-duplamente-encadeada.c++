#include <stdio.h>
#include <stdlib.h>
typedef struct dupla{
    int dado;
    struct dupla *elink, *dlink;
}no;
no *crialde(int n){
    
    no *ini=NULL, *p;
    int valor;
    for(int i = 1; i<= n;i++){
    printf("\n Digite o valor %d da lista:",i);
    scanf("%d", &valor);
    
    p = (no*) malloc(sizeof(no));
    p -> dado = valor;
    
    p->elink = ini;
    p->dlink = NULL;
    
    if(ini != NULL)
    ini->dlink = p;
    
    ini=p;
}
return ini;
}
void escrevelista(no *p){
    printf("\nLista: ");
    while(p != NULL){
        printf("%d\t", p->dado);
        p = p->elink;
    }
}
int main(){
    no *primeira;
    int n;
    printf(" Cria uma lista duplamente encadeada");
    do{
        printf("\n Entre com o numero de nos:");
        scanf("%d", &n);
    }while(n<0);
    primeira = crialde(n);
    if(primeira !=NULL){
        printf("\n Lista Criada \n");
        escrevelista(primeira);
    }else{
        printf("\n Lista Vazia");
    }
    return 0;
}