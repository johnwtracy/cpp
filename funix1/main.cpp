// Author: Sean Davis

#include <stdlib.h>
#include "funix.h"

int main()
{	
  Funix *funix = (Funix*) malloc(sizeof(Funix));

  run(funix);
  free (funix);
  return 0;
} // main()
