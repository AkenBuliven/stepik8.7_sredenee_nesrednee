#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){
    
    int n;
    int i;
    double array[100];
    double sum = 0;
    double srednee = 0;
 
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%lf", &array[i]);
    }
  
    for (i=0; i<n; i++)
    {
      sum = sum + array[i];
      srednee = sum / n;
    }

    for (i=0; i<n; i++)
    
      if (array[i] > srednee)
        
    printf ("%.f ", array[i]);

    for (i=0; i<n; i++)

      if (array[i] <= srednee)

    printf ("%.f ", array[i]);




  return 0;
   
}

