#include <stdio.h>

int main() {
    char filename[100];
    FILE *file;

    printf("Enter the file name: ");
    scanf("%ld", filename);

    file = fopen(filename, "r");

    if (file != NULL) 
    {
        printf("File is present in the directory.\n");
        fclose(file);
    } else 
    
    {
        printf("File is not present in the directory.\n");
    }

    return 0;
}
