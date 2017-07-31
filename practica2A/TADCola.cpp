#include "TADCola.h"

cola::cola() {
    inicio=0;
    fin=-1;
}

void cola::encolar(termino e) {
    if (fin+1 < MAX) {
        fin++;
        elementos[fin]=e;
    }
}

void cola::desencolar() {
    for(int i=inicio;i<fin;i++)
        elementos[i]=elementos[i+1]; //Desplazamiento
    fin--;
}

termino cola::primero() {
    return(elementos[inicio]);
}

bool cola::esvacia () {
    return (fin == -1);
}

int cola::longitud() {
    return fin+1;
}