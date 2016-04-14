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
	printf("Здравствуйте!\n");
	printf("Выбирайте услугу: \n");
	printf("1 - Ввод площади.\n2 - Выбор покрытия.\n3 - Подсчет суммы к оплате\n4 - Выход\n");
	
	

	scanf_s("%d", &menu);
	
	
	switch (menu){
	case 1:
		printf("Вы выбрали ввод площади.\nКакой формы помещение?\n1 - прямоугольная. 2 - треугольная. 3 - круглая.\n 4 - вернуться\n");
		vibor1:
		scanf_s("%d", &vibor1);
		switch (vibor1){
		case 1:
			printf("Вы выбрали прямоугольник.\nВведите длину первой стороны: ");
			scanf_s("%f", &a);
			printf("\nВведите длину второй стороны: ");
			scanf_s("%f", &b);
			square = a * b;
			printf("Площадь равна %f", square);
			system("pause");
			goto start;
			break;
		case 2:
			printf("Вы выбрали треугольник.\n");
			printf("Введите первую сторону:\n");
			scanf_s("%f", &a);
			printf("Введите вторую сторону:\n");
			scanf_s("%f", &b);
			printf("Введите третью сторону:\n");
			scanf_s("%f", &c);
			if ((a + b)>c && (a + c)>b && (b + c)>a) // проверка на существование треугольника с введенными сторонами
			{
				d = (a + b + c) / 2;  square = sqrt(d*(d - a)*(d - b)*(d - c)); 
			}
			else
			{
				printf("Такой комнаты не существует!\n");
			}
				printf("Площадь равна: %f\n", square);
			
				system("pause");
			goto start;
			break;
		case 3:
			printf("Вы выбрали круг.\nВведите радиус:");
			scanf_s("%f", &a);
			square = a * a * pi;
			printf("Площадь равна: %f\n", square);

			system("pause");
			goto start;
			break;
		case 4:
			printf("Возврат в меню\n");
			goto start;
			break;
		default:
			printf("Некорректный ввод. Попробуйте еще раз.\n");
			goto vibor1;
			break;
		}
	case 2:
		choose2:
		printf("1 - Плитка - 5 шейкелей за метр.\n2 - Ламинат - 8 шейкелей за метр.\n3 - Линолеум - 3 шейкеля за метр.\n4 - Досчатый пол - 1 шейкель за метр.\n5 - Вернуться в меню.\n");
		scanf_s("%d", &vibor2);
		switch (vibor2){
		case 1:
			printf("Вы выбрали плитку.\n");
			pokritie = 5;
			printf("Возврат в меню.");
			goto start;
			break;
		case 2:
			printf("Вы выбрали ламинат.\n");
			pokritie = 8;
			printf("Возврат в меню.\n");
			goto start;
			break;
		case 3:
			printf("Вы выбрали линолеум.\n");
			pokritie = 3;
			printf("Возврат в меню.\n");
			goto start;
			break;
		case 4:
			printf("Вы выбрали доски.\n");
			pokritie = 1;
			printf("Возврат в меню.\n");
			goto start;
			break;
		case 5:
			printf("Возврат в меню.\n");
			goto start;
			break;
		default:
			printf("Некорректный ввод. Попробуйте еще раз.\n");
			goto choose2;
			break;
		}
	case 3:
		printf("Подсчет шейкелей.\n");
		
		if (pokritie != 0 && square != 0){
			babki = square * pokritie;
			printf("Общая сумма равна %f шейкель(-ей).\n", babki);
			goto start;
		}
		else{
			printf("Ошибка. Не посчитана площадь или не выбранон покрытие.\n");
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