#include <iostream>
#include "LinkedList.cpp"
#include "Stack.cpp"
#include "Queue.cpp"


using namespace std;

int main()
{
	LinkedList<int> l_list;

	Stack<int> stack;

	stack.push(30);
	stack.push(70);
	stack.push(20);
	stack.push(60);

	
	stack.displayStackItems();
	cout << "\nStack top is " << stack.top() << endl;
	stack.pop();
	cout << "\nStack after pop" << endl;
	
	stack.displayStackItems();

	cout << "Stack length is " << stack.length();

	l_list.insertAtHead(5);
	l_list.insertAtHead(7);
	l_list.insertAtHead(10);

	LinkedList<int> l_list2(l_list);
	
	/*L_LIST.INSERTATTAIL(3);

	L_LIST.INSERTAFTER(2, 5);
	L_LIST.INSERTAFTER(6, 7);
	
	COUT << "BEFORE DELETE" << ENDL;
	L_LIST.DISPLAYITEMS();

	
	L_LIST.DELETEELEMENT(10)*/;


	//cout << "Head value is "<< l_list.getHead()->value << endl;
	/*cout << "After delete 10" << endl;
	l_list.displayItems();

	l_list.deleteHead();
	cout << "After delete head" << endl;
	l_list.displayItems();

	l_list.deleteTail();
	cout << "After delete tail" << endl;
	

	cout << "Length is " << l_list.getLength();

	//cout << "Tail value is " << l_list.getTail()->value << endl;

//	cout << "Founded value is " << l_list.searchFor(10)->value << endl;
	//cout << "Founded value is " << l_list.searchFor(3)->value << endl;
	
	l_list.displayItems();

	l_list2.displayItems();
*/


	Queue<int> queue;

	queue.enqueue(105);
	queue.enqueue(170);
	queue.enqueue(130);
	queue.enqueue(140);

	cout<<queue.dequeue();

	queue.displayQueueItems();

	cout << "Queue length is " << queue.length();
	cout << endl;



	return 0;
}