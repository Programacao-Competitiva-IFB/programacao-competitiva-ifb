#include <stdio.h>

int main(){
    int C[13], E[13], O[13], P[13];
    for (int i = 0; i < 13; i++){
        C[i] = 0;
        E[i] = 0;
        O[i] = 0; 
        P[i] = 0;
    }
    char entrada[157];
    scanf("%s", entrada);
    // ddN
    for (int i = 0; entrada[i] != '\0'; i += 3){
        int numero = (entrada[i] - '0') * 10 + (entrada[i+1] - '0');
        if (entrada[i+2] == 'C')
            C[numero - 1] += 1;
        else if (entrada[i+2] == 'E')
            E[numero - 1] += 1;
        else if (entrada[i + 2] == 'U')
            O[numero - 1] += 1;
        else
            P[numero-1]++;
    }
    int total = 13;
    for (int i = 0; i < 13; i++){
        if (C[i] > 1){
            total = -1;
            break;
        }
        else if (C[i] == 1){
            total--;
        }
    }
    total == -1 ? printf("erro\n") : printf("%d\n", total);

    total = 13;
    for (int i = 0; i < 13; i++){
        if (E[i] > 1){
            total = -1;
            break;
        }
        else if (E[i] == 1)
            total--;
    }
    total == -1 ? printf("erro\n") : printf("%d\n", total);

    total = 13;
    for (int i = 0; i < 13; i++){
        if (O[i] > 1){
            total = -1;
            break;
        }
        else if (O[i] == 1)
            total--;
    }
    total == -1 ? printf("erro\n") : printf("%d\n", total);

    total = 13;
    for (int i = 0; i < 13; i++){
        if (P[i] > 1){
            total = -1;
            break;
        }
        else if (P[i] == 1)
            total--;
    }
    total == -1 ? printf("erro\n") : printf("%d\n", total);
    
}