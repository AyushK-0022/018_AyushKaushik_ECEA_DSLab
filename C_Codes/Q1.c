// input , search , adding , remove. //
#include <stdio.h>
int n;
int array(int a[n] ,int n ) ;
int array (int a[n] ,int n) {

  for (int i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }
   printf("elements of array ");

   for (int i = 0; i < n; i++)
   {
      printf("%d ", a[i]);
   }
 return printf("%d",a[3]);
}
int main()
{
   int n, m, f;
   printf("the value of f ");
   scanf("%d", &f);
   printf("value of n");
   scanf("%d", &n);
   printf("value of m");
   scanf("%d", &m);
   int a[n];
   int len = n ;
   array (&a[n] , &n) ;
   
   printf("enter the array");

 

   // searching of an aray //

   for (int i = 0; i < n + 1; i++)
   {
      if (a[i] == f)
      {
         printf("%d", i);
      }
   }

   // addting of an elemnt in the array //

   for (int i = n + 1; i > m; i--)
   {
      a[i] = a[i - 1];
   }

   a[2] = 35;

   //    a[2] = 0;
   printf("\n");

   for (int i = 0; i < n + 1; i++)
   {
      printf("%d ", a[i]);
   }
   // removing of the element

   for (int i = m; i < n + 1; i++)
   {
      a[i] = a[i + 1];
   }
   printf("\n");
   for (int i = 0; i < n; i++)
   {
      printf("%d", a[i]);
   }

   return 0;
}