// Liam Sullivan mls6888@psu.edu
// Collaborator: Olivia Mandola ovm5126@psu.edu
// Collaborator: Tyler Holman   trh5481@psu.edu

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>


int main(void) {

  
  char * temp = readline("Enter temperature in celsius: " );
  double cel, fah;
  cel = atof(temp);
  fah = ((cel * 1.8) + 32);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", cel, fah);

  return 0;
}