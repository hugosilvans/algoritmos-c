// Retorna o maior entre 2 números inteiros

int maior_2n(int a, int b) {
    int maior;
    if (a > b) {
        maior = a;
    } else {
        maior = b;
    }
    return maior;
}

// Retorna o menor entre 2 números inteiros

int menor_2n(int a, int b) {
    int menor;
    if (a < b) {
        menor = a;
    } else {
        menor = b;
    }
    return menor;
}

// Retorna o maior entre 3 números inteiros

int maior_3n(int a, int b, int c) { return maior_2n(maior_2n(a, b), c); }

// Retorna o menor entre 3 números inteiros

int menor_3n(int a, int b, int c) { return menor_2n(menor_2n(a, b), c); }

// Retorna o maior entre N números inteiros

int maior_n(int numeros[], int n) {
    int maior = numeros[0];
    for (int i = 0; i < n; i++) {
        maior = maior_2n(maior, numeros[i]);
    }
    return maior;
}

// verifica se um dado numero eh primo (1) ou nao (0)

/* Um inteiro primo tem exatamente dois divisores positivos. */
int verificar_numero_primo(int numero) {
    if (numero < 2)
        return 0;
    for (int divisor = 2; divisor <= numero / divisor; divisor++) {
        if (numero % divisor == 0)
            return 0;
    }
    return 1;
}
