class Queue {

	//�������
	int* Wait;

	//������������ ������ �������
	int MaxQueueLength;

	//������� ������ �������
	int QueueLength;

public:

	//�����������
	Queue(int m);

	//����������
	~Queue();

	//���������� ��������
	void add(int c);

	//���������� ��������
	int extract();

	//������� �������
	void clear();

	//�������� ������������� ��������� � �������
	bool isEmpty();

	//�������� �� ������������ �������
	bool isFull();

	//���������� ��������� � �������
	int getCount();

	//������������ �������
	void show();
};
