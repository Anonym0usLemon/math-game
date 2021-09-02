//Dominic DiModugno
//August 6th, 2021

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int addition();
int subtraction();
int multiplication();
int division();

int main()
{
	int selection, answer;
	selection = 6;

	
	while(selection !=5)
	{
		printf("Math Practice Program Main Menu");
		printf("\n\n1. Addition");
		printf("\n2. Subtraction");
		printf("\n3. Multiplication");				//Asks user to select a type of problem
		printf("\n4. Division");
		printf("\n5. Exit");
		printf("\nSelect an option: ");
		
		scanf("%d", &selection);					//Takes user input
		
		if(selection == 1)				//Tests user input
		{
			addition();	//calls addition function
		}
		else if(selection == 2)
		{
			subtraction();	//calls subtraction function
		}
		else if(selection == 3)
		{
			multiplication();	//calls multiplication function
		}
		else if(selection == 4)
		{
			division();	//calls division function
		}
		else
		{

			return 0;
		}
		
	
	}
	
	return 0;
}
/***************************************************************************************/
int addition()
{
	int  answer, userAnswer, x, y, i, b, correct, totalProblems;
	char difficulty;
	
//Difficulty Selection
	
	printf("Select the difficulty level e-easy m-medium h-hard: ");  //asks user to select difficulty
	scanf(" %c", &difficulty);
	
	if(difficulty == 'e')	//processes user selection and assigns a random number e >= 10 m >= 100 h >= 1000
	{
		x = (rand()%10);
		y = (rand()%10);
	}
	else if(difficulty == 'm')
	{
		x = (rand()%100);
		y = (rand()%100);
	}
	else
	{
		x = (rand()%1000);
		y = (rand()%1000);
	}

//shows math problem and prompts user for answer, displays correct/incorrect. 
	
	answer = x + y;
	
	for(i = 1; i <=3; i++)
	{
		printf("\n\n%d + %d = ? ", x, y);
		scanf("%d", &userAnswer);
		
		if(answer == userAnswer)
		{
			printf("Correct!\n\n");	
			break;
		}
		else 
		{
			printf("Sorry, incorrect\n\n");
		}	
	}
	
	return 0;
}
/***************************************************************************************/	
int subtraction()
{
	int  answer, firstNum, secondNum, userAnswer, i, x, y, correct, totalProblems;
	char difficulty;

	correct = 0;
	totalProblems = 0;
	
	printf("Select the difficulty level e-easy m-medium h-hard: ");
	scanf(" %c", &difficulty);											//asks user for difficulty
	
		if(difficulty == 'e')		//assigns difficulty 
	{
		x = (rand()%10);
		y = (rand()%10);
	}
	else if(difficulty == 'm')
	{
		x = (rand()%100);
		y = (rand()%100);
	}
	else
	{
		x = (rand()%1000);
		y = (rand()%1000);
	}
	
//sets the larger number in front	
	if(x >= y)
	{
		firstNum = x;
		secondNum = y;
	}
	else
	{
		firstNum = y;
		secondNum = x;
	}
//calculates answer
	
	answer = firstNum - secondNum;
	
	//shows user problem and prompts for answer, displays correct/incorrect
	for(i = 1; i <=3; i++)
	{
		printf("\n\n%d - %d = ? ", firstNum, secondNum);
		scanf("%d", &userAnswer);
		
		if(answer == userAnswer)
		{
			printf("Correct!\n\n");	
			break;
		}
		else 
		{
			printf("Sorry, incorrect\n\n");
		}
		
	}
	
	return 0;
}
/***************************************************************************************/
int multiplication()
{
	int  answer, userAnswer, i, x, y;
	char difficulty;
	
	int correct = 0;
	int totalProblems = 0;

	printf("Select the difficulty level e-easy m-medium h-hard: ");
	scanf(" %c", &difficulty);											//asks user for difficulty
	
		if(difficulty == 'e')		//assigns user difficulty
	{
		x = (rand()%10);
		y = (rand()%10);
	}
	else if(difficulty == 'm')
	{
		x = (rand()%100);
		y = (rand()%100);
	}
	else
	{
		x = (rand()%1000);
		y = (rand()%1000);
	}
	
//calculates answer
	
	userAnswer = x * y;
	
//prints problem and tests user answer
	
	for(i = 1; i <=3; i++)
	{
		printf("\n\n%d * %d = ? ", x, y);
		scanf("%d", &answer);
		
		if(answer == userAnswer)
		{
			correct++;
			totalProblems++;
			printf("Correct!\n\n");
			break;	
		}
		else 
		{
			printf("Sorry, incorrect\n\n");
		}
	}
	
	return 0;
}
/**************************************************************************************/
int division()
{
	int numerator = 0;
	int denominator = 0;
	int x, y;
	char difficulty;
	
	int correct = 0;
	int totalProblems = 0;

	printf("Select the difficulty level e-easy m-medium h-hard: ");
	scanf(" %c", &difficulty);											//asks user for difficulty
	
		if(difficulty == 'e')		//assigns user difficulty
	{
		x = (rand()%10);
		y = (rand()%10);
	}
	else if(difficulty == 'm')
	{
		x = (rand()%100);
		y = (rand()%100);
	}
	else
	{
		x = (rand()%1000);
		y = (rand()%1000);
	}

//sets numerator higher than denominator
	if(x >= y)
	{
		denominator = y;
		numerator = x;
	}
	else
	{
		numerator = y;
		denominator = x;
	}

//calcualtes answer and remainder 
	int answer = numerator  / denominator;
	int remainder = numerator % denominator;
	int userAnswer = 0;
	int userRemainder = 0;
	
//prompts user for  answer
	printf("\n%d / %d = ", numerator , denominator);
	scanf("%d", &userAnswer);
	
	printf("Remainder: ");
	scanf("%d", &userRemainder);
	printf("\n\n");

//tests user answer and diplays correct/incorrect
	if((answer == userAnswer) && (remainder == userRemainder))
	{
		printf("Correct\n\n");
	}
	else
	{
		printf("Incorrect\n\n");
	}
	
	return 0;
}

