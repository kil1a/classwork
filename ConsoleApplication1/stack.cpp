#include "stack.h"
#include <iostream>
using namespace std;
Stack::Stack() {
	//���������� ���� ����
	top = EMPTY;
}

void Stack::clear() {

	//����������� "�������" �����
	//(������ � ������� ��� ��� ����������,
	//�� ������� ������, ���������������
	//�� ������ � �������� �����,
	//����� �� ������������)
	top = EMPTY;
}

bool Stack::isEmpty() {
	//����?
	return top == EMPTY;

}

bool Stack::isFull() {
	//�����?
	return top == FULL;
}

int Stack::getCount() {
	//���������� �������������� � ����� ���������
	return top + 1;
}

void Stack::push(char c) {
	//���� � ����� ���� �����, �� ����������� ���������
	//�� ������� ����� � ��������� ����� �������
	if (!isFull())
		st[++top] = c;
}

char Stack::pop(bool isPop) {
	//���� � ����� ���� ��������, �� ����������
	//������� � ��������� ��������� �� ������� �����
	if (!isEmpty())
		if (isPop)
			return st[top--];
		else
			return st[top];
	else //���� � ����� ��������� ���
		return 0;
}

