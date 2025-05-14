#include <stdio.h>
#include <string.h>

void ordena(char *ent);

int main() {
    
    char  ent1[20], ent2[20];
    puts("Digite a primeira palavra");
    scanf("%s", ent1);
    puts("Digite a segunda palavra");
    scanf("%s", ent2);
    
    ordena(ent1);
    ordena(ent2);
    
  
    if(strcmp(ent1, ent2) == 0){
      puts("Sao Anagramas");
    }else{
      puts("Nao Sao Anagramas");
    }
    for(int i = 0; i < strlen(ent1); i++){
      printf("%c", ent1[i]);
    }
    
    puts("");

    for(int i = 0; i < strlen(ent2); i++){
      printf("%c", ent2[i]);
    }
    puts("");
  
 

  return 0;
}

void ordena(char *ent) { 
    int i, t, temp;
    int n = strlen(ent); 
    for (i = 0; i < n - 1; i++) {
        for (t = 0; t < n - i - 1; t++) { 
            if (ent[t] > ent[t + 1]) {
                temp = ent[t];
                ent[t] = ent[t + 1];
                ent[t + 1] = temp;
            }
        }
    }
}
