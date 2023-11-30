#ifndef __STACK_CPP
#define __STACK_CPP
#include "stack.h"

template <class T>
Stack<T>::Stack(){
	list = LinkedList<T>();
}

template <class T>
Stack<T>::Stack(Stack<T>& otherStack){
	list = LinkedList<T>(otherStack.list);
}

template <class T>
void Stack<T>::push(T item){

	list.insertAtHead(item);
}

template <class T>
T Stack<T>::top(){
	
	return list.getHead()->value;
}

template <class T>
T Stack<T>::pop(){
	
	shared_ptr<ListItem<T>> head = list.getHead();
	
	if (head != nullptr) {
		T value = head->value;
		list.deleteHead();
		return value;
	}

	cout << "Stack is empty" << endl;

}

template <class T>
int Stack<T>::length(){
	return list.getLength();
}

template <class T>
bool Stack<T>::isEmpty(){
	return list.getLength() == 0;
}

template <class T>
void Stack<T>::displayStackItems() {
	list.displayItems();
}
#endif
