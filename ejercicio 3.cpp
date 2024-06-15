#include <stdio.h>

int main() {
  int puntuacion1, puntuacion2, puntuacion3, puntuacion4, media;
  char calificacion;

  // Solicitar al usuario las puntuaciones
  printf("Ingrese la puntuaci�n 1: ");
  scanf("%d", &puntuacion1);
  printf("Ingrese la puntuaci�n 2: ");
  scanf("%d", &puntuacion2);
  printf("Ingrese la puntuaci�n 3: ");
  scanf("%d", &puntuacion3);
  printf("Ingrese la puntuaci�n 4: ");
  scanf("%d", &puntuacion4);

  // Calcular la media
  media = (puntuacion1 + puntuacion2 + puntuacion3 + puntuacion4) / 4;

  // Determinar la calificaci�n
  if (media >= 90 && media <= 100) {
    calificacion = 'A';
  } else if (media >= 80 && media < 90) {
    calificacion = 'B';
  } else if (media >= 70 && media < 80) {
    calificacion = 'C';
  } else if (media >= 60 && media < 70) {
    calificacion = 'D';
  } else {
    calificacion = 'E';
  }

  // Mostrar la media y la calificaci�n
  printf("Media: %d\n", media);
  printf("Calificaci�n: %c\n", calificacion);

  // Mostrar la tabla de calificaciones
  printf("\n| Media | Puntuaci�n |\n");
  printf("|---|---|");
  printf("| 90-100 | A |\n");
  printf("| 80-90 | B |\n");
  printf("| 70-80 | C |\n");
  printf("| 60-70 | D |\n");
  printf("| 0-60 | E |\n");

  return 0;
  }
