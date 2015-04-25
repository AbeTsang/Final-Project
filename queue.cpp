#include "queue.h"
#include <iostream>
using namespace std;

Queue::Queue(int size){
	maxLength = size;
	head = 0;
	tail = 0;
	items = new int[maxLength];
}
Queue::~Queue(){
	delete[] items;
}

void Queue::enqueue(int c){
	items[tail] = c;
	if(tail == maxLength-1)
		tail = 0;
	else
		tail++;
	cout<<"T: "<<tail<<endl;
	cout<<"H: "<<head<<endl;
	cout<<"c="<<c<<endl;
}

int Queue::dequeue(){
	int p = items[head];
	if(head == maxLength-1)
		head = 0;
	else
		head++;

	cout<<"T: "<<tail<<endl;
	cout<<"H: "<<head<<endl;

	return p;
}

bool Queue::isFull(){
	//bool full = false;
	if((head == tail+1) || (head == 0 && tail == maxLength-1))
		full = true;
	return full;
}


void Queue::Doubling(){

    maxLength = maxLength*2;

    int *arr = new int[maxLength];
    for(int i=0; i!=maxLength;i++){
        if(i<=maxLength/2) arr[i] = items[i];
        else arr[i] = 0;
    }
    delete[] items;
    items = new int[maxLength];
    for(int i=0; i!=maxLength;i++){items[i] = arr[i];}
    delete[] arr;
    full = false;

    return;
}

