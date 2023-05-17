class Queue {

	//Очередь
	int* Wait;

	//Максимальный размер очереди
	int MaxQueueLength;

	//Текущий размер очереди
	int QueueLength;

public:

	//Конструктор
	Queue(int m);

	//Деструктор
	~Queue();

	//Добавление элемента
	void add(int c);

	//Извлечение элемента
	int extract();

	//Очистка очереди
	void clear();

	//Проверка существования элементов в очереди
	bool isEmpty();

	//Проверка на переполнение очереди
	bool isFull();

	//Количество элементов в очереди
	int getCount();

	//демонстрация очереди
	void show();
};
