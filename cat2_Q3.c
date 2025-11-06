/*
Name:Gerishon Karanja
Reg:PA106/G/29211/25
*/

#include <stdio.h>
#include <stdlib.h>

#define INPUT_FILE "input.txt"
#define OUTPUT_FILE "output.txt"

// Prompt user for 10 integers and store in input.txt
void writeInputFile() {
    FILE *fp = fopen(INPUT_FILE, "w");
    if (fp == NULL) {
        perror("Error opening input file");
        return;
    }

    int num;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);
    }

    fclose(fp);
}

//  Read integers from input.txt, calculate sum and average, write to output.txt
void processInputFile() {
    FILE *in = fopen(INPUT_FILE, "r");
    FILE *out = fopen(OUTPUT_FILE, "w");

    if (in == NULL || out == NULL) {
        perror("Error opening file");
        if (in) fclose(in);
        if (out) fclose(out);
        return;
    }

    int num, sum = 0, count = 0;
    while (fscanf(in, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if (count == 0) {
        fprintf(out, "No data to process.\n");
    } else {
        float average = (float)sum / count;
        fprintf(out, "Sum: %d\nAverage: %.2f\n", sum, average);
    }

    fclose(in);
    fclose(out);
}

// Read and print contents of both input.txt and output.txt
void displayFiles() {
    FILE *in = fopen(INPUT_FILE, "r");
    FILE *out = fopen(OUTPUT_FILE, "r");

    if (in == NULL || out == NULL) {
        perror("Error opening file");
        if (in) fclose(in);
        if (out) fclose(out);
        return;
    }

    char ch;
    printf("\nContents of %s:\n", INPUT_FILE);
    while ((ch = fgetc(in)) != EOF) {
        putchar(ch);
    }

    printf("\nContents of %s:\n", OUTPUT_FILE);
    while ((ch = fgetc(out)) != EOF) {
        putchar(ch);
    }

    fclose(in);
    fclose(out);
}

int main() {
    writeInputFile();
    processInputFile();
    displayFiles();
    return 0;

}
