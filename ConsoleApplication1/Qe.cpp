#include "Qe.h"
#include<iostream>
using namespace std;

void Queue::show() {

	cout << "\n-----------------------------------\n";

	//������������ �������
	for (int i = 0; i < QueueLength; i++) {
		cout << Wait[i] << " ";
	}
	cout << "\n-----------------------------------\n";
}

Queue::~Queue() {
	//�������� �������
	delete[]Wait;
}

Queue::Queue(int m) {
	//�������� ������
	MaxQueueLength = m;
	//������� �������
	Wait = new int[MaxQueueLength];
	//���������� ������� �����
	QueueLength = 0;
}

void Queue::clear() {
	//����������� "�������" �������
	QueueLength = 0;
}

bool Queue::isEmpty() {
	//����?
	return QueueLength == 0;
}

bool Queue::isFull() {
	//�����?
	return QueueLength == MaxQueueLength;
}

int Queue::getCount() {
	//���������� �������������� � ����� ���������
	return QueueLength;
}

void Queue::add(int c) {
	//���� � ������� ���� ��������� �����,
	//�� ����������� ����������
	//�������� � ��������� ����� �������
	if (!isFull())
		Wait[QueueLength++] = c;
}

int Queue::extract() {
	//���� � ������� ���� ��������, �� ���������� ���,
	//������� ����� ������ � �������� �������
	if (!isEmpty()) {
		//��������� ������
		int temp = Wait[0];
		//�������� ��� ��������
		for (int i = 1; i < QueueLength; i++)
			Wait[i - 1] = Wait[i];
		QueueLength--;
		//������� ������(�������)
		return temp;
	}
	else //���� � ������� ��������� ���
		return -1;
}
