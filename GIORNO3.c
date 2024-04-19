#include <stdio.h>

void wrongProgram();
void correctProgram();

int main() {
    int choice;
    
    printf("Benvenuto!\n");
    printf("Scegliere un'opzione:\n");
    printf("1. Utilizzare il codice corretto.\n");
    printf("2. Utilizzare il codice errato.\n");
    printf("Scelta: ");
    if(scanf("%d", &choice) != 1) {
        printf("Input non valido. Si prega di inserire un numero intero.\n");
        return 1; // Termina il programma con un codice di errore
    }

    switch(choice) {
        case 1:
            correctProgram();
            break;
        case 2:
            wrongProgram();
            break;
        default:
            printf("Scelta non valida. Si prega di inserire 1 o 2.\n");
            break;
    }

    return 0;
}

void correctProgram() {
    int vector[10], i, j, k;
    int swap_var;

    printf("Inserire 10 interi:\n");
    for (i = 0; i < 10; i++) {
        printf("[%d]: ", i + 1);
        if (scanf("%d", &vector[i]) != 1) {
            printf("Input non valido. Si prega di inserire un numero intero.\n");
            return; // Termina la funzione in caso di input non valido
        }
    }

    printf("Il vettore inserito e':\n");
    for (i = 0; i < 10; i++) {
        printf("[%d]: %d\n", i + 1, vector[i]);
    }

    for (j = 0; j < 10 - 1; j++) {
        for (k = 0; k < 10 - j - 1; k++) {
            if (vector[k] > vector[k + 1]) {
                swap_var = vector[k];
                vector[k] = vector[k + 1];
                vector[k + 1] = swap_var;
            }
        }
    }
    printf("Il vettore ordinato e':\n");
    for (j = 0; j < 10; j++) {
        printf("[%d]: %d\n", j + 1, vector[j]);
    }
}

void wrongProgram() {
    int vector[10], i, j, k;
    int swap_var;

    printf("Inserire 10 interi:\n");
    for (i = 0; i < 10; i++) {
        printf("[%d]: ", i + 1);
        if (scanf("%d", &vector[i]) != 1) {
            printf("Input non valido. Si prega di inserire un numero intero.\n");
            return; // Termina la funzione in caso di input non valido
        }
    }

    printf("Il vettore inserito e':\n");
    // Questo ciclo non termina mai perché la condizione i >= 0 è sempre vera
    for (i = 0; i >= 0; i++) {
        printf("[%d]: %d\n", i + 1, vector[i]);
    }

    for (j = 0; j < 10 - 1; j++) {
        for (k = 0; k < 10 - j - 1; k++) {
            if (vector[k] > vector[k + 1]) {
                swap_var = vector[k];
                vector[k] = vector[k + 1];
                vector[k + 1] = swap_var;
            }
        }
    }
    printf("Il vettore ordinato e':\n");
    for (j = 0; j < 10; j++) {
        printf("[%d]: %d\n", j + 1, vector[j]);
    }
}
