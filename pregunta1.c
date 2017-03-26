# include <stdio.h>

 int main () {
 int a, b;
 char cadena [8];
 int c;

 a = 7; b =14; c =128;
 printf (" Asigne un valor a la cadena de caracteres ");
 scanf (" %s", cadena );
 printf ("La cadena es %s\n", cadena );
 printf ("El valor asignado a las variables es :\n") ;
 printf ("\ta: %d", a);
 printf ("\tb: %d", b);
 printf ("\tc: %d", c);

 return 0;
 }
/*EL programa ejecuta el código perfectamente, excepto cuando se digita más
de una palabra separada con un espacio, ya que al asignar "%s" se limita 
sólo a la primera palabra, en cambio si asigno a cadena "%[^\n]"
la cadena de caracteres se imprime en pantalla correctamente.*/
