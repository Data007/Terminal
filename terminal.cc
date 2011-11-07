#include<stdio.h>
#include<readline/readline.h>
#include<readline/history.h>


int main(){

   char* asdf = readline(":");
   printf("You entered: %s\n", asdf);
   //free(asdf);
   return 0;
}
