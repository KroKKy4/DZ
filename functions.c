#include <stdio.h>
#include <math.h>
#include "Functions.h"
#include <time.h>

void zadanie1(float x, float c, float a)
{
   float L = (sqrt(exp(x) - pow(cos(pow(x, 2) * pow(a, 5)), 4)) + pow(atan(a - pow(x, 5)), 4)) / (exp(1) * sqrt(fabs(a + x * pow(c, 4))));
   printf("%f", L);
}

void zadanie2(float t)
{
   float S;
   S = 3 * t * t - 6 * t;
   printf_s("%f", S);
}

void zadanie3(double a, double b, double c)
{
   double x1, x2;
   double D;
   D = b * b - 4 * a * c;
   if (D > 0)
   {
      x1 = (-b - sqrt(D)) / (2 * a);
      x2 = (-b + sqrt(D)) / (2 * a);
      printf_s("Your roots:x1 = %f, x2 = %f", x1, x2);
   }
   if (D == 0)
   {
      x1 = -b / (2 * a);
      printf_s("Your root:x = %f", x1);
   }
   if (D < 0)
      printf_s("No roots");
}


   double zadanie4(int code, float t)
{  
   switch (code)
      {
      case 48: 15 * (t / 60); break;
      case 44: 18 * (t / 60); break;
      case 46: 13 * (t / 60); break;
      case 45: 11 * (t / 60); break;
      default: printf("Uncorrect number of region");
      }
   return 0;
}

void zadanie5()
{
   int chis;
   int copy;
   for (int i = 1000; i <= 9999; i++)
   {
      chis = 0;
      copy = i;
      for (int j = 0; j < 4; j++)
      {
         chis = chis + pow(copy % 10, 4);
         copy = copy % 10;
      }
      if (chis == i)
         printf("%d", i);
   }  
}

void zadanie6(int* bin, int N)
{
   int i = 0;
   int dec = 0;
   int c = N - 1;
   while (i < N)
   {
      dec = dec + bin[i] * pow(2, c);
      i++;
      c = c - 1;
   }
   printf("%d", dec);
}


void zadanie7(int I, int J)
{
   srand(time(NULL));
   int* L = malloc(I * J * sizeof(int));
   for (int i = 0; i < I * J; i++)
   {
      L[i] = rand() % (21) - 10;
   }
   for (int i = 0; i < I; i++)
   {
      for (int j = 0; j < J; j++)
      {
         printf_s("%d", L[i * J + j]);
      }
      printf_s("\n");
   }
}






