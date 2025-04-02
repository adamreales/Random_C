# Random_C
#include &lt;stdio.h> #include &lt;stdlib.h> #include &lt;time.h>  int main() {     // Inicialitza el generador de nombres aleatoris amb el temps actual     srand(time(NULL));      // Genera un nombre aleatori     int randomNumber = rand();      // Imprimeix el nombre aleatori     printf("Nombre aleatori: %d\n", randomNumber);      return 0; }
