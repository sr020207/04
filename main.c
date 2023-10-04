#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   
   int x, y; 
   
   printf("input two integers : \n");
   scanf("%d", &x);
   scanf("%d", &y);
   
   printf("+ result is : %d \n", x+y);
   printf("- result is : %d \n", x-y);
   printf("* result is : %d \n", x*y);
   printf("/ result is : %d \n", x/y);
   printf("%% result is : %d \n", x%y);
   
   return 0;
}

