#include <stdio.h>
#include <string.h>

void tecladoTelefone(char *palavra) {
    int len = strlen(palavra);
    for (int i = 0; i < len; i++) {
        switch(palavra[i]) {
            case 'A': case 'B': case 'C':
                printf("2");
                break;
            case 'D': case 'E': case 'F':
                printf("3");
                break;
            case 'G': case 'H': case 'I':
                printf("4");
                break;
            case 'J': case 'K': case 'L':
                printf("5");
                break;
            case 'M': case 'N': case 'O':
                printf("6");
                break;
            case 'P': case 'Q': case 'R': case 'S':
                printf("7");
                break;
            case 'T': case 'U': case 'V':
                printf("8");
                break;
            case 'W': case 'X': case 'Y': case 'Z':
                printf("9");
                break;
            default:
                break;
        }
    }
    printf("\n");
}
int main() {
    int N;
    scanf("%d", &N);

    char palavra[101];
    for (int i = 0; i < N; i++) {
        scanf("%s", palavra);
        tecladoTelefone(palavra);
    }
    return 0;
}
