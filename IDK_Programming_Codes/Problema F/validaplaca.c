#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isNumeric(const char* str, int start, int end) {
    for (int i = start; i <= end; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

int isAlphaUpper(const char* str, int start, int end) {
    for (int i = start; i <= end; i++) {
        if (!isupper(str[i])) {
            return 0;
        }
    }
    return 1;
}

const char* validatePlate(const char* plate) {
    int len = strlen(plate);

    if ((plate[0] == 'A' || plate[0] == 'P') && isNumeric(plate, 1, len-1) && len >= 2 && len <= 6) {
        return "Placa muito antiga";
    }

    if (isNumeric(plate, 0, len-1) && len >= 1 && len <= 7) {
        return "Placa numerica";
    }

    if (len == 6 && isAlphaUpper(plate, 0, 1) && isNumeric(plate, 2, 5)) {
        return "Placa AA-9999";
    }

    if (len == 7 && isAlphaUpper(plate, 0, 2) && isNumeric(plate, 3, 6)) {
        return "Placa AAA-9999";
    }

    if (len == 7 && isAlphaUpper(plate, 0, 2) && isdigit(plate[3]) && isupper(plate[4]) && isNumeric(plate, 5, 6)) {
        return "Placa Mercosul";
    }

    return "Placa invalida";
}

int main() {
    char plate[51];

    if (scanf("%50s", plate) != 1) {
        fprintf(stderr, "Erro na leitura da placa.\n");
        return 1;
    }

    printf("%s\n", validatePlate(plate));

    return 0;
}

