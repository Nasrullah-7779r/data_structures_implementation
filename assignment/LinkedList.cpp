#ifndef __LIST_CPP
#define __LIST_CPP

#include <cstdlib>
#include<iostream>
#include <memory>
#include "LinkedList.h"

using namespace std;

template <class T>
LinkedList<T>::LinkedList() {
	head = nullptr;
	tail = nullptr;
	length = 0;
}

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& otherLinkedList){

	head = tail = nullptr;
	shared_ptr<ListItem<T>> current = otherLinkedList.head;

	while (current->next != nullptr) {
		
		insertAtTail(current->value);
		
		current = current->next;

		if (current->next == nullptr) {
			insertAtTail(current->value);
			return;
		}
		
	}
}

template <class T>
void LinkedList<T>::insertAtHead(T item) {

	shared_ptr<ListItem<T>> newItem = make_shared<ListItem<T>>(item);

	if (head == nullptr) {

		head = tail = newItem;
		length++;
	}

	else {
				
		newItem->next = head;
		head->prev = newItem;
		head = newItem;
		length++;
	}

}

template <class T>
void LinkedList<T>::displayItems() {
	
	shared_ptr<ListItem<T>> current =  head;
	cout << endl;
	while (current != nullptr) {
		cout << current->value << " ";
		current = current->next;
	}
	cout << endl;
}


template <class T>
void LinkedList<T>::insertAtTail(T item){
	
	shared_ptr<ListItem<T>> newItem = make_shared<ListItem<T>>(item);

	if (tail == nullptr) {

		head = tail = newItem;
		length++;
	}

	else {

		newItem->prev = tail;
		tail->next = newItem;
		tail = newItem;
		length++;
	}

}

template <class T>
void LinkedList<T>::insertOperationForInsertAfter(shared_ptr<ListItem<T>> current, shared_ptr<ListItem<T>> newItem) {
	
	newItem->next = current->next;
	current->next->prev = newItem;

	current->next = newItem;
	newItem->prev = current;
}

template <class T>
void LinkedList<T>::insertAfter(T toInsert, T afterWhat){

	shared_ptr<ListItem<T>> newItem = make_shared<ListItem<T>>(toInsert);

	shared_ptr<ListItem<T>> current = head;

	if (current->value == afterWhat) {
		insertOperationForInsertAfter(current, newItem);
		length++;
		return;
	}

		while (current->value != afterWhat) {

				current = current->next;

				if (current->value == afterWhat) {

					insertOperationForInsertAfter(current, newItem);
					length++;
					return;
				}
		}

		cout << "\nValue " << afterWhat << " is not found" << endl;
		
}


template <class T>
shared_ptr<ListItem<T>> LinkedList<T>::getHead() {
	return head;
}

template <class T>
shared_ptr<ListItem<T>> LinkedList<T>::getTail() {
	return tail;
}

template <class T>
shared_ptr<ListItem<T>> LinkedList<T>::searchFor(T item){

	shared_ptr<ListItem<T>> current = head;

	if (current->value == item)
		return current;

	while (current->value != item) {

		current = current->next;

		if (current->value == item) {

			return current;
		}
	}

}


template <class T>
void LinkedList<T>::deleteElement(T item){

	shared_ptr<ListItem<T>> current = head;

	if (current->value == item) {
		deleteHead();
		length--;
		return;
	}
		
	
		while (current->value != item) {

			current = current->next;

			if (current->value == item) {
				
				current->prev->next = current->next;
				current->next->prev = current->prev;
				length--;
				return;
			}
		}
	
	cout << "Item " << item << " is not found" << endl;
}

template <class T>
void LinkedList<T>::deleteHead(){

	shared_ptr<ListItem<T>> headItem = head;

	if (headItem != nullptr) {
		headItem = headItem->next;
		head = headItem;
		length--;
		return;
	}

	cout << "\nList is empty" << endl;
}

template <class T>
void LinkedList<T>::deleteTail(){

	shared_ptr<ListItem<T>> tailItem = tail;

	if (tailItem != nullptr) {

		tailItem->prev->next = nullptr;
		tail = tailItem->prev;
		length--;
		return;
	}

	cout << "\nList is empty" << endl;
}

template <class T>
int LinkedList<T>::getLength(){

	return length;

}
#endif
