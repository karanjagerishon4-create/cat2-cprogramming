/*
name:Gerishon Karanja
Reg:PA106/G/29211/25
Descrition:program to declare and print a 2D array using nested for loop


Define array data structure:
An array is a data structure that stores a fixed size sequence of elements of the same data
type in contiguous memory location
*/


//declaring 2D array
int scores1[2][2]={
{65,92},
{84,72}
};

int scores2[2][2]={
{35,70},
{59,67}
};

#include <stdio.h>

int main() {
    int scores1[2][2] = {
        {65, 92},
        {84, 72}
		
		};
    int scores2[2][2]={
        {35, 70},
        {59, 67}
    };
    
    int i,j;
    printf("Array 1:\n");
    for (i = 0; i < 2; i++){
		 for (j = 0; j < 2; j++) {
            printf("%d", scores1[i][j]);
            
        }
		printf("\n");
		
	} 
       
        printf("\nArray 2:\n");
        for(i=0;i<2;i++){
        	for(j=0;j<2;j++){
			printf("%d",scores2[i][j]);	
			}
		printf("\n");	
    }

    return 0;
}