#include <iostream>
class Stack {
	//Нижняя и верхняя границы стека
	enum { EMPTY = -1, FULL = 5 };

	//Массив для хранения данных
	char st[FULL + 1];

	//индекс определяющий вершину стека
	int top;

public:
	//Конструктор
	Stack();

	//Добавление элемента
	void push(char c);

	//Извлечение элемента
	char pop(bool isPop = true);

	//Очистка стека
	void clear();

	//Проверка существования элементов в стеке
	bool isEmpty();

	//Проверка на переполнение стека
	bool isFull();

	//Количество элементов в стеке
	int getCount();

	void show() {
		for (int i{ top }; i != EMPTY; i--)
			std::cout << st[i] << " ";
		std::cout << std::endl;
	}

};