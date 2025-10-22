#include "kalkulator.h"

int saberi(int a, int b) { return a + b; }
int oduzmi(int a, int b) { return a - b; }
int pomnozi(int a, int b) { return a * b; }

/* popravka: dodatna sigurnost deljenja nulom */
float podeli(int a, int b) {
    if (b == 0) return 0.0f;
    return (float)a / b;
}
