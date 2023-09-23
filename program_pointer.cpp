/*
Dzaki Imam Fawwaz - 2702367486
23 Sep 2023
*/

#include <stdio.h>

//head fungsi yang di perlukan 
void swap_passByValue(int a, int b);
void swap_passByReference(int *a, int *b);

int main(){
	printf("\n\033[1;34m=========================\n");
	printf("     Program Dzaki\n");
	printf("Pass by Value & Reference\n");
	printf("=========================\033[0m\n\n\n");
	
	int num1 = 10;
	int num2 = 99;
	
	
	// pass by value
	printf("      Pass by Value\n");
	printf("=========================\n\n");
	printf("before: num1: %d & num2: %d\n", num1, num2);
	swap_passByValue(num1, num2);
	
	printf("\n\n=========================\n\n\n");
	
	//pass by reference / address
	printf("     Pass by Reference\n");
	printf("=========================\n\n");
	printf("before: num1: %d & num2: %d\n", num1, num2);
	swap_passByReference(&num1, &num2);
	
	printf("\n\n=========================\n\n\n");
	
	return 0;
}

//body fungsi yang diperlukan

/*
fungsipass-by-value 
*/
void swap_passByValue(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	printf("after: num1: %d & num2: %d", a, b);
}

/*
fungsipass-by-reference
*/
void swap_passByReference(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
	printf("after: num1: %d & num2: %d\n", *a, *b);	
}


