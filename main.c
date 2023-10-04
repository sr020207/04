#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   
   int x; 
   
   printf("input the second : ");
   scanf("%d", &x);
    
   printf("the time for %d second is %d : %d : %d", x, x/3600, x%3600/60, x%3600%60%60);
   
   
   return 0;
}
