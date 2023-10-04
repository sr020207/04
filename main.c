#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   
   unsigned int x;
   int a;
   
   printf("input a number : "); 
   scanf("%ui", &x);
   
   for (a=0; x != 0; x >>= 1)
   {
      if (x & 1)
         {
            a++;
       }
   }
   
   printf("The result is : %i\n", a); 
   
   return 0;
}
