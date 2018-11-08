#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <memory.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

#define N 100

int main(int argc, char* argv[]){
    char c, name[N] = "";
    int file = 0;


   if (argc<=2){
   		strcpy(name, argv[1]);
       file = open(name, O_WRONLY);
   }
   else{
       if (strcmp(argv[1], "-a")==0){
           strcpy(name, argv[2]);
           file = open(name, O_RDWR|O_APPEND);
       }
   }

   while (read(STDIN_FILENO, &c, 1) > 0)
       write(file, &c, 1);

	return 0;
}
