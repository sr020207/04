#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   
   int y;
   int cond1, cond2;
   
   printf("input the year : "); 
   scanf("%d", &y);
   
   cond1 = y%4 == 0 && y%100 != 0;
   cond2 = y%4 != 0 || y%100 == 0;
   
   printf("is the year %d the leap year? : %d", y, cond1); 
   
   return 0;
}
