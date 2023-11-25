#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main()
{
	LinkedList<int> l_list;

	

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
	*/
	l_list.displayItems();

	l_list2.displayItems();
		return 0;
}