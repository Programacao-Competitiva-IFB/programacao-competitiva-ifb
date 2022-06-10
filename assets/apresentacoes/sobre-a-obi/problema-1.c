#include <stdio.h>

int main(){
    char venceu;
    int auxiliar = 0;
    for (int i = 0; i < 6; i++){
        scanf("%c%*c", &venceu);
        if (venceu == 'V')
            auxiliar++;
    }
    if (auxiliar >= 5)
        printf("1");
    else if (auxiliar >= 3)
        printf("2");
    else if (auxiliar >= 1)
        printf("3");
    else
        printf("-1");
    printf("\n");
}