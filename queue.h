class Queue{
	int head;
	int tail;
	int maxLength;
	int* items;
	bool full;

	public:
	Queue(int);
	~Queue();
	void enqueue(int);
	int dequeue();
	bool isFull();
	bool isEmpty();
	void Doubling();
	void queuesize();
	void who(int);
	void message();

};

