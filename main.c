#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   
   int x; 
   
   printf("input the second : ");
   scanf("%d", &x);
    
   printf("the time is %d : %d", x / 60, x % 60);
   
   return 0;
}
