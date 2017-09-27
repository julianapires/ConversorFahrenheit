#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{ 
    setlocale (LC_ALL, "");

  float Celsius, Far;
        
        printf ("Informe a temperatura em graus Fahrenheit: ");
        scanf ("%f", &Far);
        
        Celsius = 5*(Far-32)/9;
        
        printf ("\nA temperatura em Celsius é de: %.2f\n", Celsius);
  
  system("PAUSE");	
  return 0;
}
