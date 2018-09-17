#define TP 70.0
#define KP 5.0
#define KI 1.0
#define KD 10.0

#define DIREITA 0
#define ESQUERDA 1

task turnPID();
task turn180();
void goFoward();
void turn90(int lado);
