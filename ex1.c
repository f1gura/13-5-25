#include <stdio.h>
#include <string.h>

int main() {

    char ent[11];
    int cont = 0;
    puts("Digite a palavra");
    scanf("%10s", ent);
    int tamanho = strlen(ent);
    printf("%d\n", tamanho);

    int par = strlen(ent)%2;
    printf("%d\n",par);

    if(par==1){
        for(int i=0; i<(tamanho); i++){
            if(ent[i] ==  ent[tamanho-1-i]){
                cont++;
            }else{
                cont = 0;
                break;
            }
        }
    }
    if(cont > 0){
        puts("Eh um palindromo");
    }else{
        puts("Nao eh um palindromo");
    }

    return 0;
    
}