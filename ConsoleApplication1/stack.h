#include <iostream>
class Stack {
	//������ � ������� ������� �����
	enum { EMPTY = -1, FULL = 5 };

	//������ ��� �������� ������
	char st[FULL + 1];

	//������ ������������ ������� �����
	int top;

public:
	//�����������
	Stack();

	//���������� ��������
	void push(char c);

	//���������� ��������
	char pop(bool isPop = true);

	//������� �����
	void clear();

	//�������� ������������� ��������� � �����
	bool isEmpty();

	//�������� �� ������������ �����
	bool isFull();

	//���������� ��������� � �����
	int getCount();

	void show() {
		for (int i{ top }; i != EMPTY; i--)
			std::cout << st[i] << " ";
		std::cout << std::endl;
	}

};