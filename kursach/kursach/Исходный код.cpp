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
	printf("������������!\n");
	printf("��������� ������: \n");
	printf("1 - ���� �������.\n2 - ����� ��������.\n3 - ������� ����� � ������\n4 - �����\n");
	
	

	scanf_s("%d", &menu);
	
	
	switch (menu){
	case 1:
		printf("�� ������� ���� �������.\n����� ����� ���������?\n1 - �������������. 2 - �����������. 3 - �������.\n 4 - ���������\n");
		vibor1:
		scanf_s("%d", &vibor1);
		switch (vibor1){
		case 1:
			printf("�� ������� �������������.\n������� ����� ������ �������: ");
			scanf_s("%f", &a);
			printf("\n������� ����� ������ �������: ");
			scanf_s("%f", &b);
			square = a * b;
			printf("������� ����� %f", square);
			system("pause");
			goto start;
			break;
		case 2:
			printf("�� ������� �����������.\n");
			printf("������� ������ �������:\n");
			scanf_s("%f", &a);
			printf("������� ������ �������:\n");
			scanf_s("%f", &b);
			printf("������� ������ �������:\n");
			scanf_s("%f", &c);
			if ((a + b)>c && (a + c)>b && (b + c)>a) // �������� �� ������������� ������������ � ���������� ���������
			{
				d = (a + b + c) / 2;  square = sqrt(d*(d - a)*(d - b)*(d - c)); 
			}
			else
			{
				printf("����� ������� �� ����������!\n");
			}
				printf("������� �����: %f\n", square);
			
				system("pause");
			goto start;
			break;
		case 3:
			printf("�� ������� ����.\n������� ������:");
			scanf_s("%f", &a);
			square = a * a * pi;
			printf("������� �����: %f\n", square);

			system("pause");
			goto start;
			break;
		case 4:
			printf("������� � ����\n");
			goto start;
			break;
		default:
			printf("������������ ����. ���������� ��� ���.\n");
			goto vibor1;
			break;
		}
	case 2:
		choose2:
		printf("1 - ������ - 5 �������� �� ����.\n2 - ������� - 8 �������� �� ����.\n3 - �������� - 3 ������� �� ����.\n4 - �������� ��� - 1 ������� �� ����.\n5 - ��������� � ����.\n");
		scanf_s("%d", &vibor2);
		switch (vibor2){
		case 1:
			printf("�� ������� ������.\n");
			pokritie = 5;
			printf("������� � ����.");
			goto start;
			break;
		case 2:
			printf("�� ������� �������.\n");
			pokritie = 8;
			printf("������� � ����.\n");
			goto start;
			break;
		case 3:
			printf("�� ������� ��������.\n");
			pokritie = 3;
			printf("������� � ����.\n");
			goto start;
			break;
		case 4:
			printf("�� ������� �����.\n");
			pokritie = 1;
			printf("������� � ����.\n");
			goto start;
			break;
		case 5:
			printf("������� � ����.\n");
			goto start;
			break;
		default:
			printf("������������ ����. ���������� ��� ���.\n");
			goto choose2;
			break;
		}
	case 3:
		printf("������� ��������.\n");
		
		if (pokritie != 0 && square != 0){
			babki = square * pokritie;
			printf("����� ����� ����� %f �������(-��).\n", babki);
			goto start;
		}
		else{
			printf("������. �� ��������� ������� ��� �� �������� ��������.\n");
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