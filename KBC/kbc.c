#include<stdio.h>
#include<stdlib.h>
int main(){
	int choice, score=0;

 printf("\n$$       $$  $$$$$$$$  $$         $$$$$$    $$$$$$   $$       $$  $$$$$$$$    $$$$$$$$   $$$$$$     $$    $$  $$$$$$$    $$$$$$ ");
 printf("\n$$   $   $$  $$        $$        $$   $$   $$    $$  $$$     $$$  $$             $$     $$    $$    $$   $$   $$    $$  $$    $$");
 printf("\n$$  $$$  $$  $$        $$        $$        $$    $$  $$$$   $$$$  $$             $$     $$    $$    $$  $$    $$    $$  $$      ");
 printf("\n$$ $$ $$ $$  $$$$$     $$        $$        $$    $$  $$ $$ $$  x$$  $$$$$          $$     $$    $$    $$$$$     $$$$$$$   $$      "); 
 printf("\n$$$$   $$$$  $$        $$        $$        $$    $$  $$  $$$  $$  $$             $$     $$    $$    $$  $$    $$    $$  $$      ");
 printf("\n$$$     $$$  $$        $$        $$    $$  $$    $$  $$   $   $$  $$             $$     $$    $$    $$   $$   $$    $$  $$    $$");
 printf("\n$$       $$  $$$$$$$$  $$$$$$$$   $$$$$$    $$$$$$   $$       $$  $$$$$$$$       $$      $$$$$$     $$    $$  $$$$$$$    $$$$$$ ");

	printf("\n\n\nThe first question for Rs 10000 is being displayed on your screen as follows:");
	printf("\n\n\nQues1. Which day is celebrated as World Computer Literacy Day?\n(1) September 3\n(2) October 1\n(3) December 2\n(4) August 3\n\nEnter your choice:\n");
	scanf("%d", &choice);
	
	switch(choice){
		case 1: printf("Sorry you lost!");
		break;
		case 2: printf("Sorry you lost!");
		break;
		case 3: printf("Congratulations! Your answer is correct.");
		score+=10000;
		 
		case 4: printf("Sorry you lost!");
		break;
		default: printf("Invalid choice.");
		exit(0);
	} 
		printf("\n\nYou have won %d rupees.", score);

	if(score==10000){
		printf("\n\n\nThe second question for Rs 200000 is being displayed on your screen as follows:");
		printf("\n\n\nQues2. Which country gifted the 'Statue of Liberty' to USA in 1886?\n(1) Canada\n(2) France\n(3) England\n(4) Brazil\n\nEnter your choice:\n");
		scanf("%d", &choice);

		switch(choice){
			case 1: printf("Sorry you lost!");
			break;
			case 2: printf("Congratulations! Your answer is correct.");
			score = 200000;
			 
			case 3: printf("Sorry you lost!");
			break;
			case 4: printf("Sorry you lost!");
			break;
			default: printf("Invalid choice.");
			exit(0);
		}
			printf("\n\nYou have won %d rupees.", score);

		if(score==200000){
			printf("\n\n\nThe third question for Rs 300000 is being displayed on your screen as follows:");
			printf("\n\n\nQues3. Dead Sea is located between which two countries?\n(1) Jordan and Sudan\n(2) Turkey and UAE\n(3) Jordan and Israel\n(4) UAE and Egypt\n\n Enter your choice:\n");
			scanf("%d", &choice);

			switch(choice){
				case 1: printf("Sorry you lost!");
				break;
				case 2: printf("Sorry you lost!");
				break;
				case 3: printf("Congratulations! Your answer is correct.");
				score = 300000;
				 
				case 4: printf("Sorry you lost!");
				break;
				default: printf("Invalid choice.");
				exit(0);
			}
				printf("\n\nYou have won %d rupees.", score);

			if(score==300000){
				printf("\n\n\nThe fourth question for Rs 10000000 is being displayed on your screen as follows:");
				printf("\n\n\nQues4. Which country is known as the 'Playground of Europe'?\n(1) Austria\n(2) Holland\n(3) Italy\n(4) Switzerland\n\nEnter your choice:\n");
				scanf("%d", &choice);

				switch(choice){
					case 1: printf("Sorry you lost!");
					break; 
					case 2: printf("Sorry you lost!");
					break;
					case 3: printf("Sorry you lost!");
					break;
					case 4: printf("Congratulations! Your answer is correct.");
					score = 10000000;
					 
					default: printf("Invalid choice.");
				}
					printf("\n\nYou have won %d rupees.", score);

			}
		}	
	}	
}