/*Задание 1. Многоквартирный дом
Что нужно сделать
На вход программе поступают десять фамилий в формате строк. 
Это фамилии жильцов квартир с первой по десятую. Необходимо 
прочитать эти фамилии и записать в одномерный массив. Далее 
пользователь вводит три номера квартир. Необходимо вывести в 
консоль фамилию жильца, проживающего в этой квартире. Если 
пользователь введёт некорректный номер квартиры, необходимо 
сообщить ему об этом.

Пример

← SidorovA 
← IvanovA 
← PetrovA 
← SidorovB 
← IvanovB 
← PetrovB 
← SidorovC 
← IvanovC 
← PetrovC 
← SidorovD 
←10 
→SidorovD 
←1 
→SidorovA 
←5 
→IvanovB

Что оценивается
Используется массив строк для хранения данных.
В коде не используются библиотеки, кроме <iostream> и <string>.
Программа проверяет доступность элемента по индексу и выдаёт 
корректный результат.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int NUMBERSTRING = 10;
    string surname[NUMBERSTRING];
	int numberApartment = 0;

	// Ввод фамилии жильцов
	for (int i = 0; i < NUMBERSTRING; i++)
	{
		cout << "Enter your name, please: ";
		getline(cin, surname[i]);
				
	}

	// Вывод квартиры в которой живет жилец
	for (int i = 0; i < 3; i++)
	{		
		cout << "Enter apartment number or zero for exit: ";
		cin >> numberApartment;
		
		if (numberApartment == 0)
			break;

		if (numberApartment < 1 || numberApartment > NUMBERSTRING) 
			std::cout << "Error. Incorrect apartment number!" << '\n';
		else 
			cout << "Surname " << surname[numberApartment - 1] << " number apartment " << numberApartment << '\n';

	}
	return 0;
}



