//ForAndWhileLoops
#include <stdio.h>

int main()
{
	//Variable Declarations
	int i = 0; //for loop increment variable
	int n = 0; //while loop increment variable
	

	//Simple printf
	printf("\nSimple printf");
	printf("\n\tHello Word! \tHello Word! \tHello Word!"); //	\t is tab


	//For Loop
	printf("\nFor Loop");
	for (i = 0; i < 4; i++) //i is set to 0. Loop runs until i is 4. Each time block runs, i increases by 1.
	{
		printf("\n\tHello Word! \tHello Word! \tHello Word!");
	}


	//While Loop
	printf("\nWhileLoop");
	while (n != 5) //Sets the condition that n cannot equal 5
	{
		printf("\n\tHello Word! \tHello Word! \tHello Word!");
		n = n + 1; //Adds 1 to N until N gets to 5
	}

	//Exit
	printf("\n\nPush ENTER to exit");
	getchar();


	return 0;

}
