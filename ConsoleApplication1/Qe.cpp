#include "Qe.h"
#include<iostream>
using namespace std;

void Queue::show() {

	cout << "\n-----------------------------------\n";

	//демонстраци€ очереди
	for (int i = 0; i < QueueLength; i++) {
		cout << Wait[i] << " ";
	}
	cout << "\n-----------------------------------\n";
}

Queue::~Queue() {
	//удаление очереди
	delete[]Wait;
}

Queue::Queue(int m) {
	//получаем размер
	MaxQueueLength = m;
	//создаем очередь
	Wait = new int[MaxQueueLength];
	//»значально очередь пуста
	QueueLength = 0;
}

void Queue::clear() {
	//Ёффективна€ "очистка" очереди
	QueueLength = 0;
}

bool Queue::isEmpty() {
	//ѕуст?
	return QueueLength == 0;
}

bool Queue::isFull() {
	//ѕолон?
	return QueueLength == MaxQueueLength;
}

int Queue::getCount() {
	// оличество присутствующих в стеке элементов
	return QueueLength;
}

void Queue::add(int c) {
	//≈сли в очереди есть свободное место,
	//то увеличиваем количество
	//значений и вставл€ем новый элемент
	if (!isFull())
		Wait[QueueLength++] = c;
}

int Queue::extract() {
	//≈сли в очереди есть элементы, то возвращаем тот,
	//который вошел первым и сдвигаем очередь
	if (!isEmpty()) {
		//запомнить первый
		int temp = Wait[0];
		//сдвинуть все элементы
		for (int i = 1; i < QueueLength; i++)
			Wait[i - 1] = Wait[i];
		QueueLength--;
		//вернуть первый(нулевой)
		return temp;
	}
	else //≈сли в очереди элементов нет
		return -1;
}
