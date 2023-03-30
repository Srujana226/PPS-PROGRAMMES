#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE * fPtr;
    char ch;
    fPtr = fopen("bubblesort.c", "r");
    if(fPtr == NULL)
    {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }
    printf("File opened successfully. Reading file contents character by character. \n\n");
    {
    	while((ch=getchar)!=EOF) 
    	ch = fgetc(fPtr);
        putchar(ch);
	 }
    fclose(fPtr);
    return 0;
}
