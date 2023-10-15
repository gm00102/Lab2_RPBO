#include <iostream>
import student;
import student1;
import student2;
import student3;
import student4;

using namespace std;
void print(double x, double f1, double x2, double f2, int i2, double f3, double epsilon, double f4);
int main()
{
	int choice, i2;
	double x, y, x2, epsilon;
	int choice2 = 0;
	setlocale(LC_ALL, "ru");
	while (1)
	{
		if (choice2 == 0)
		{
			cout << "Введите значение x для функции f1(x)" << endl;
			cin >> x; 
			cout << "Введите значение x для функции f2(x)" << endl;
			cin >> x2;
			cout << "Введите номер члена последовательности a, до которого считается сумма последовательности для функции f3(n)" << endl;
			cin >> i2;
			cout << "Введите точность, до которой счиается член последовательности для функции f4(n)" << endl;
			cin >> epsilon;
		}
		cout << "\t\t\tМеню\t\t\t" << endl;
		cout << "1 - 1 задание" << endl;
		cout << "2 - 2 задание" << endl;
		cout << "3 - 3 задание" << endl;
		cout << "4 - 4 задание" << endl;
		cout << "5 - 5 задание" << endl;
		cout << "0 - Выход из программы" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "\t\t\tВывод первого задания\t\t\t" << endl;
			print(x, RBPO::Lab2::Variant7::Task1::f1(x), x2, RBPO::Lab2::Variant7::Task1::f2(x2), i2, RBPO::Lab2::Variant7::Task1::f3(i2), epsilon, RBPO::Lab2::Variant7::Task1::f4(epsilon));
			break;
		case 2:
			cout << "\t\t\tВывод второго задания\t\t\t" << endl;
			print(x, RBPO::Lab2::Variant7::Task2::f1(x), x2, RBPO::Lab2::Variant7::Task2::f2(x2), i2, RBPO::Lab2::Variant7::Task2::f3(i2), epsilon, RBPO::Lab2::Variant7::Task2::f4(epsilon));
			break;
		case 3:
			cout << "\t\t\tВывод третьего задания\t\t\t" << endl;
			print(x, RBPO::Lab2::Variant7::Task3::f1(x), x2, RBPO::Lab2::Variant7::Task3::f2(x2), i2, RBPO::Lab2::Variant7::Task3::f3(i2), epsilon, RBPO::Lab2::Variant7::Task3::f4(epsilon));
			break;
		case 4:
			cout << "\t\t\tВывод четвертого задания\t\t\t" << endl;
			print(x, RBPO::Lab2::Variant7::Task4::f1(x), x2, RBPO::Lab2::Variant7::Task4::f2(x2), i2, RBPO::Lab2::Variant7::Task4::f3(i2), epsilon, RBPO::Lab2::Variant7::Task4::f4(epsilon));
			break;
		case 5:
			cout << "\t\t\tВывод пятого задания\t\t\t" << endl;
			print(x, RBPO::Lab2::Variant7::Task5::f1(x), x2, RBPO::Lab2::Variant7::Task5::f2(x2), i2, RBPO::Lab2::Variant7::Task5::f3(i2), epsilon, RBPO::Lab2::Variant7::Task5::f4(epsilon));
			break;
		case 0:
			return 0;
		default:
			cout << "Неверный ввод" << endl;
			break;
		}
		cout << "Оставить предыдущие значения переменных?" << endl;
		cout << "1 - оставить" << endl;
		cout << "0 - ввести новые" << endl;
		cin >> choice2;
	}
	return 0;
}

void print(double x, double f1, double x2, double f2, int i2, double f3, double epsilon, double f4)
{
	printf("f1(%f) = %f\n", x, f1);
	printf("f2(%f) = %f\n", x2, f2);
	printf("f3(%d) = %f\n", i2, f3);
	printf("f4(%f) = %f\n", epsilon, f4);
}