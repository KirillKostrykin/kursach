#include <iostream>
#include <locale>
#include <cmath>



int main()
{
	setlocale(LC_ALL, "Russian");

	float babki, a = 0, b = 0, c = 0, d = 0, pi = 3.14, square = 0;
	int menu = 0;
	int vibor1 = 0, vibor2 = 0, pokritie = 0;
	start:
	printf("Hello!\n");
	printf("Select the service: \n");
	printf("1 - Calculate the area.\n2 - Choose cover.\n3 - Calculate price\n4 - Exit\n");
	
	

	scanf_s("%d", &menu);
	
	
	switch (menu){
	case 1:
		printf("You choose area calculating.\nWhat form the room?\n1 - rectangle. 2 - triangle. 3 - circle.\n 4 - Back\n");
		vibor1:
		scanf_s("%d", &vibor1);
		switch (vibor1){
		case 1:
			printf("You choose rectangle.\nEnter the first side length: ");
			scanf_s("%f", &a);
			printf("\nEnter the second side lentght: ");
			scanf_s("%f", &b);
			square = a * b;
			printf("Square is: %f", square);
			system("pause");
			goto start;
			break;
		case 2:
			printf("You choose triangle.\n");
			printf("Enter the first side length:\n");
			scanf_s("%f", &a);
			printf("Enter the second side length:\n");
			scanf_s("%f", &b);
			printf("Enter the third side length:\n");
			scanf_s("%f", &c);
			if ((a + b)>c && (a + c)>b && (b + c)>a) // check for the existence of a triangle with entered sides
			{
				d = (a + b + c) / 2;  square = sqrt(d*(d - a)*(d - b)*(d - c)); 
			}
			else
			{
				printf("That room can not exist!\n");
			}
				printf("Square is: %f\n", square);
			
				system("pause");
			goto start;
			break;
		case 3:
			printf("You choose circle.\nEnter radius:");
			scanf_s("%f", &a);
			square = a * a * pi;
			printf("Square is: %f\n", square);

			system("pause");
			goto start;
			break;
		case 4:
			printf("Back to menu\n");
			goto start;
			break;
		default:
			printf("Incorrect input. Try again.\n");
			goto vibor1;
			break;
		}
	case 2:
		choose2:
		printf("1 - Tile - 5 shekels per square meter.\n2 - Laminate - 8 shekels per square meter.\n3 - Linoleum - 3 shekels per square meter.\n4 - Wooden floor - 1 shekel per square meter.\n5 - Back to menu.\n");
		scanf_s("%d", &vibor2);
		switch (vibor2){
		case 1:
			printf("You choose tile.\n");
			pokritie = 5;
			printf("Return to menu.\n");
			goto start;
			break;
		case 2:
			printf("You choose laminate.\n");
			pokritie = 8;
			printf("Return to menu.\n");
			goto start;
			break;
		case 3:
			printf("You choose linoleum.\n");
			pokritie = 3;
			printf("Return to menu.\n");
			goto start;
			break;
		case 4:
			printf("You choose wooden planks.\n");
			pokritie = 1;
			printf("Return to menu.\n");
			goto start;
			break;
		case 5:
			printf("Return to menu.\n");
			goto start;
			break;
		default:
			printf("Incorrect input. Try again.\n");
			goto choose2;
			break;
		}
	case 3:
		printf("Calculating of the total amount.\n");
		
		if (pokritie != 0 && square != 0){
			babki = square * pokritie;
			printf("Total amount is %f shekel(-s).\n", babki);
			goto start;
		}
		else{
			printf("Error. Òot designed or selected area coverage.\n");
			goto start;
		}
		break;
	case 4:
		printf("A D I O S   A M I G O S !\n");
		break;
	default: 
		goto start;
		break;
	}
	system("pause");
}