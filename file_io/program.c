#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	// deklarime variablash
    FILE *inputFile; 
	FILE *outputFile;
    char name[50]; 
    int nameCount = 0; 
    char letter = 'A'; 

	// hap skedarin per lexim
    inputFile = fopen("names.txt", "r");
    if (inputFile == NULL)
	{
        perror("Error opening input file");
        return 1;
    }

	//hap skedarin per shkrim
    outputFile = fopen("filtered_names.txt", "w");
    if (outputFile == NULL)
	{
        perror("Error opening output file");
        fclose(inputFile);
        return 1;
    }

	// leximi dhe perpunimi i emrave, fgets lexon emrat nje nga nje
    while (fgets(name, sizeof(name), inputFile) != NULL)
	{
        nameCount++;
        printf("Name: %s\n", name);

	// kontrollo nese emri fillon me shkronjen e duhur
        if (toupper(name[0]) == letter)
		{
            fprintf(outputFile, "%s\n", name);
        }
	}
	// printon nr total te emrave
    printf("Total number of names: %d\n", nameCount);
	// mbyll skedaret
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
