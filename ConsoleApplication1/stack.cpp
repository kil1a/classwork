#include "stack.h"
#include <iostream>
using namespace std;
Stack::Stack() {
	//Изначально стек пуст
	top = EMPTY;
}

void Stack::clear() {

	//Эффективная "очистка" стека
	//(данные в массиве все еще существуют,
	//но функции класса, ориентированные
	//на работу с вершиной стека,
	//будут их игнорировать)
	top = EMPTY;
}

bool Stack::isEmpty() {
	//Пуст?
	return top == EMPTY;

}

bool Stack::isFull() {
	//Полон?
	return top == FULL;
}

int Stack::getCount() {
	//Количество присутствующих в стеке элементов
	return top + 1;
}

void Stack::push(char c) {
	//Если в стеке есть место, то увеличиваем указатель
	//на вершину стека и вставляем новый элемент
	if (!isFull())
		st[++top] = c;
}

char Stack::pop(bool isPop) {
	//Если в стеке есть элементы, то возвращаем
	//верхний и уменьшаем указатель на вершину стека
	if (!isEmpty())
		if (isPop)
			return st[top--];
		else
			return st[top];
	else //Если в стеке элементов нет
		return 0;
}

