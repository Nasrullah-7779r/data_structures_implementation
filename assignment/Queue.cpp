#ifndef __QUEUE_CPP
#define __QUEUE_CPP
#include "queue.h"

template <class T>
Queue<T>::Queue(){
	list = LinkedList<T>();
}

template <class T>
Queue<T>::Queue(Queue<T>& otherQueue){
	list = LinkedList<T>(otherQueue.list);
}

template <class T>
void Queue<T>::enqueue(T item){
	list.insertAtTail(item);
}

template <class T>
T Queue<T>::front(){
	return list.getHead()->value;
}

template <class T>
T Queue<T>::dequeue(){
	T value = list.getHead()->value;
	list.deleteHead();
	return value;
}

template <class T>
int Queue<T>::length(){
	return list.getLength();
}

template <class T>
bool Queue<T>::isEmpty(){
	return list.getLength() == 0;
}

template <class T>
void Queue<T>::displayQueueItems() {
	list.displayItems();
}
#endif
