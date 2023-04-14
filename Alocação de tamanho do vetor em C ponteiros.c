#include <stdio.h>
#include <stdlib.h>
int
main (void)
{
  int pos, length;
  int *vector;
  printf ("Enter a length for a vector : ");
  scanf ("%d", &length);
  vector = malloc (length * sizeof (int));
  
  if (vector == NULL)
    {
      printf ("Empty vector\n");
    }
  else
    {
      for (pos = 0; pos < length; pos++)
	{
	  printf ("Enter the number %d: ", pos + 1);
	  scanf ("%d", &vector[pos]);
	}
      for (pos = 0; pos < length; pos++)
	{
	  if(vector[pos]!=length){
	    printf ("%d, ", vector[pos]);}
	  else {
	    printf ("%d ", vector[pos]);
	      
	  }
	  }
	}
      free (vector);
    }
