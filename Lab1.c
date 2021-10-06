#include <stdio.h>
#include <math.h>


int Seperate(int userInput){
	//initializing a summation of the digits
	int sumOfDigits = 0;
	//looping while the user input is not 0
	while (userInput != 0){

		int no_zeros = (int)log10((double)userInput);
		int ldigit = (int)userInput/pow(10.0, (double)no_zeros);
		//makes the user input divided by 10000

		sumOfDigits += ldigit;
		//adding the digits together, and printing it out
		printf("%d ", ldigit);

		userInput  = userInput - (ldigit * pow(10.0, (double)no_zeros));
		//moving to the next digit
		

		// this if statement is useful for formatting
		if (userInput > 0){
			printf("+ ");
		}

	}
	// some more formatting with the total sum of all the digits
	printf("= %d\n", sumOfDigits);

	//returning that summation to the main 
	return(sumOfDigits);
}

int main(void) {

	// user input
	int userInput;

	// do while loop that continues to take user input until 0 is typed
	do {
	printf("Enter number to check (0 to end): ");
	
	//scanner for user input
	scanf("%d", &userInput);

	if(userInput == 0){
		return(0);
	}
	// call to the seperate method
	int sum = Seperate(userInput);
		

	int divByNine = sum % 9;

	// flag that determines if the sum (which is sumOfDigits) is divisible by 9 
	
	if (divByNine == 0){
		printf("Since %d is divisible by 9, %d is divisible by 9\n", sum, userInput );
	}
	else{
		printf("Since %d is not divisible by 9, %d is not divisible by 9\n", sum, userInput);
	}
	}
	while (userInput != 0);
	return(0);
}

