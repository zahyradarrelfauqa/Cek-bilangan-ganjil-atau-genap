#include <stdio.h>
#define PI 3.14159 

float hitungVolumeBola(float jariJari) {
    return (4.0 / 3.0) * PI * jariJari * jariJari * jariJari;
}

int main() {
    float jariJari, volume;

    printf("Masukkan jari-jari bola: ");
    scanf("%f", &jariJari);

    volume = hitungVolumeBola(jariJari);

    printf("Volume bola dengan jari-jari %.2f adalah %.2f\n", jariJari, volume);

    return 0;
}

