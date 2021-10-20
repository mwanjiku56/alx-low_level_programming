#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int read_textfile(const char *filename, int letters){
    /*
        where letters is the number of letters it should read and print
        returns the actual number of letters it could read and print
        if the file can not be opened or read, return 0
        if filename is NULL return 0
        if write fails or does not write the expected amount of bytes, return 0
    */

   FILE *fp;
   fp = fopen(filename,"r+");
   int numberOfCharacters =0;
   if(fp){// if true then we can open the file
   
   while(letters > 0){
        
        if (fgetc(fp) == EOF) {
            /* file empty, error handling */
        } else {
            numberOfCharacters = numberOfCharacters + 1;
        }
       letters = letters - 1;
   } 
   
   return numberOfCharacters;

   }else{//We can't open the file
    return 0;
   }
}

int main(int ac, char **av)
{
    ssize_t n;

    /*if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }*/
    n = read_textfile("one.txt", 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}