# stepik8.7_sredenee_nesrednee

Разделить массив на две части, поместив в первую элементы, большие среднего арифметического массива, а во вторую — меньшие.

Входные данные:
Первая строка число 
N
,
(
N
>
0
)
N,(N>0) -- длина массива. Длина массива не более 100 элементов. Вторая строка 
N
N  натуральных чисел, записанных через пробел

Выходные данные: 
Новый массив, в котором сначала записаны элементы, большие среднего арифметического массива, а потом -- меньшие либо равные. Внутри частей элементы располагать в том порядке, в котором они встретились в исходном массиве.

Подсказки: 
Среднее арифметическое равняется сумме всех элементов массива, делённой на количество элементов.

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


