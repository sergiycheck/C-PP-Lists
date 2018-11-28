// lab6sem2Programing.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <forward_list>
#include <time.h>
using namespace std;
#define SIZE  1000;

void forwardListFunc();
void ForwardListFunctionsPart1();
void ForwardListFunctionsPart2();
void ForwardListFunctionsPart3();

void LinkedList();
void DLLlist();

void compare();

void ForwardListFunctionsPart1()
{
	forward_list<int> flist;
	forward_list<int>::iterator it;
	cout << "Part 1" << endl;

	/*cout << "Enter the num of forward_list  " << endl;
	int num;
	cin >> num;*/

	long int num = 10;
	for (int i = 0; i < num; i++)
	{
		flist.push_front(i);
	}
	cout << "1. Initial forward list" << endl;
	for (it = flist.begin(); it != flist.end(); it++) 
	{
		cout << *it <<" ";
	}
	cout << endl;
	cout << " a) insert before begin (forward_list)" << endl;
	it = flist.insert_after(flist.before_begin(), 10);
	for (it = flist.begin(); it != flist.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	cout << " b) insert at the end (forward_list)" << endl;
	flist.reverse();
	it = flist.insert_after(flist.before_begin(), 10);
	flist.reverse();
	for (it = flist.begin(); it != flist.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	forward_list<int>::iterator beg = flist.begin();
	forward_list<int>::iterator end = flist.end();
	it = beg;
	cout << "distance is " << distance(beg, end) << endl;
	int numDist = int(distance(beg, end));
	if (numDist % 2 == 0)
	{
		for (int i = 0; i < (numDist / 2)-1; i++) 
		{
			it++;
		}
	}
	else 
	{
		int mid = numDist / 2 + 1;
		for (int i = 0; i < mid-1; i++)
		{
			it++;
		}
	}
	cout << " c) insert at the middle (forward_list)" << endl;
	it = flist.insert_after(it, numDist);
	for (it = flist.begin(); it != flist.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void ForwardListFunctionsPart2() 
{
	forward_list<int> flist;
	forward_list<int>::iterator it;
	cout << "Part 2" << endl;
	/*cout << "Enter the num of forward_list  " << endl;
	int num;
	cin >> num;*/
	int num = 10;
	if ( (num <0) || (num<2) )
	{
		cout << "Small num  num will be equal to 3" << endl;
		num = 3;
	}
	for (int i = 0; i < num; i++)
	{
		flist.push_front(i);
	}
	cout << "1. Initial forward list" << endl;
	for (it = flist.begin(); it != flist.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	cout << " a) delete begin (forward_list)" << endl;
	it = flist.before_begin();
	it = flist.erase_after(it);
	for (it = flist.begin(); it != flist.end(); it++)
	{
		cout << *it << " ";
	}cout << endl;

	cout << " b) delete the end (forward_list)" << endl;
	flist.reverse();
	it = flist.before_begin();
	it = flist.erase_after(it);
	flist.reverse();
	for (it = flist.begin(); it != flist.end(); it++)
	{
		cout << *it << " ";
	}cout << endl;

	forward_list<int>::iterator beg = flist.begin();
	forward_list<int>::iterator end = flist.end();
	it = beg;
	cout << "distance is " << distance(beg, end) << endl;
	int numDist = int(distance(beg, end));
	if (numDist % 2 != 0 && numDist>1)
	{
		for (int i = 0; i < (numDist / 2) - 1; i++)
		{
			it++;
		}
		cout << " c) delete the middle (forward_list)" << endl;
		it = flist.erase_after(it);
	}
	else if(numDist > 1 )
	{
		int mid = numDist / 2;
		for (int i = 0; i < mid-1; i++)
		{
			it++;
		}
		cout << " c) delete the middle (forward_list)" << endl;
		it = flist.erase_after(it);

	}
	else 
	{
		cout << "Container is empty or small to delete elements" << endl;
	}
	for (it = flist.begin(); it != flist.end(); it++)
	{
		cout << *it << " ";
	}cout << endl;


}

void ForwardListFunctionsPart3() 
{
	forward_list<int> flist;
	forward_list<int>::iterator it;
	cout << "Part 3" << endl;
	/*cout << "Enter the num of forward_list  " << endl;
	int num;
	cin >> num;*/
	int num = 10;
	if (num <0 || num<2)
	{
		cout << "Small num  num will be equal to 3" << endl;
		num = 3;
		cout << "Num = " << num << endl;
	}
	for (int i = 0; i < num; i++)
	{
		flist.push_front(i);
	}
	cout << "1. Initial forward list" << endl;
	for (it = flist.begin(); it != flist.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	cout << " a) swap begin (forward_list)" << endl;
	cout << "The swapped element = " << 234 << endl;
	int el = 234;
	/*cin >> el;*/
	flist.front() = el;
	for (it = flist.begin(); it != flist.end(); it++)
	{
		cout << *it << " ";
	}cout << endl;
	cout << " b) swap the end (forward_list)" << endl;
	flist.reverse();
	flist.front() = el;
	flist.reverse();
	for (it = flist.begin(); it != flist.end(); it++)
	{
		cout << *it << " ";
	}cout << endl;


	forward_list<int>::iterator beg = flist.begin();
	forward_list<int>::iterator end = flist.end();
	it = beg;
	cout << "distance is " << distance(beg, end) << endl;
	int numDist = int(distance(beg, end));
	if (numDist % 2 != 0 && numDist>1)
	{
		for (int i = 0; i < (numDist / 2) - 1; i++)
		{
			it++;
		}
		cout << " c) swap the middle (forward_list)" << endl;
		//cout << "it iterator at the position " << (*it) << endl;
		it = flist.insert_after(it, el);
		it = flist.erase_after(it);
		


	}
	else if(numDist>1)
	{
		int mid = numDist / 2 ;
		for (int i = 0; i < mid-1; i++)
		{
			it++;
		}
		cout << " c) swap the middle (forward_list)" << endl;
		//cout << "it iterator at the position " << (*it) << endl;
		it = flist.insert_after(it,el);
		it = flist.erase_after(it);
		
		//cout << "it iterator at the position " << (*it) << endl;
	}
	else 
	{
		cout << "Container is empty or small to delete elements" << endl;

	}
		//cout << "it iterator at the position " << (*it) << endl;

	cout << "Forward list contain " << endl;
	for (it = flist.begin(); it != flist.end(); it++)
	{
		cout << *it << " ";
	}cout << endl;
}

void forwardListFunc() 
{
	ForwardListFunctionsPart1();
	ForwardListFunctionsPart2();
	ForwardListFunctionsPart3();
	
}
////////////////////////////////////////////////////////////////////////////////////////Node
struct Node
{
	int value; // певна інформативна частина
	Node * next; // вказівник (pointer) на наступну структуру-вузол у списку
};
class list
{
public:
	Node * head;
	list()
	{
		head = NULL;// вказівник на голову списку, спочатку він нікуди не вказує, бо список порожній
	}
	void addToEnd(int);
	void addToBegin(int);
	void insertPosition(int,int);//work on it
	void show();
	void deleteNode(int x);
	void deleteFirst();
	void deleteLast();
	void swapBegin(int);
	void swapEnd(int);
	void swapPosition(int, int);
	void sum();
	void getIndex(int);
	~list();
};
list::~list() 
{
	while (head != NULL) 
	{
		Node *temp = head->next;
		delete head;
		head = temp;
	}
}
void list::addToEnd(int num) 
{
	Node *n;
	if (!head)
	{
		head = new Node;
		head->value = num;
		head->next = NULL;
		return;
	}
	else 
	{
		n = head;
		while (n->next) 
		{
			n = n->next;
		}
		Node *newNode = new Node;
		newNode->value = num;
		newNode->next = NULL;
		n->next = newNode;
		return;
	}
}
void list::addToBegin(int num) 
{
	Node *n = new Node;
	n->value = num;
	n->next = head;
	head = n;
}
void list::swapBegin(int num) 
{
	head->value = num;
}
void list::show() 
{	
	Node *n = new Node;
	n = head;
	while (n != NULL)
	{
		cout << n->value << " ";
		n = n->next;
	}cout << endl;
}
void list::getIndex(int num)
{
	Node *n = new Node;
	n = head;
	int index = 0;
	if (n->value == num)
	{
		cout << "index of " << num << " == " << index << endl;
		return;
	}
	while (n->value!=num)
	{
		index++;
		n = n->next;
		if (n == NULL)
		{
			cout << "There is no such element" << endl;
			break;
		}
		if (n->value == num) 
		{
			cout << "index of " << num << " == " << index << endl;
			break;
		}
	}	
}
void list::sum()
{
	Node *n = new Node;
	n = head;
	int sum = 0;
	while (n != NULL)
	{
		sum +=n->value;
		n = n->next;
	}
	cout << "Sum of elements == " << sum << endl;
}
void list::deleteNode(int pos) 
{
	Node *headRef = head;
	
	if (headRef == NULL) 
	{
		return;
	}
	Node * temp = headRef;
	if (pos == 0)
	{
		headRef= headRef->next;
		delete temp;
		head = headRef;
		return;
	}
	for (int i = 0; temp != NULL && i < pos - 1; i++) 
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL) 
	{
		return;
	}
	Node *nextEl = temp->next->next;
	delete temp->next;
	temp->next = nextEl;
}
void list::insertPosition(int pos, int num)
{
	if (pos >= 1)
	{
		Node *headRef = head;
		Node *temp = headRef;

		for (int i = 0; headRef != NULL && i < pos - 1; i++)
		{
			headRef = headRef->next;
		}

		for (int i = 0; temp != NULL && i < pos; i++)
		{
			temp = temp->next;
		}

		Node *newNode = new Node;
		headRef->next = newNode;
		newNode->value = num;
		newNode->next = temp;
	}else
	{
		addToBegin(num);
	}

}
void list::swapPosition(int pos, int num)
{
	Node *headRef = head;
	for (int i = 0; headRef != NULL && i < pos; i++)
	{
		headRef = headRef->next;
	}
	headRef->value = num;
}
void list::deleteFirst()
{
	if (head != NULL) 
	{
		Node *headRef = head;
		Node * temp = headRef;
		headRef = headRef->next;
		delete temp;
		head = headRef;
	}	
}
void list::deleteLast()
{
	if (head != NULL)
	{
		Node *headRef = head;
		while (headRef->next->next)
		{
			headRef = headRef->next;
		}
		Node * temp = headRef->next;
		headRef->next = NULL;
		delete temp;
	}

	
}
void list::swapEnd(int num)
{
	Node *headRef = head;
	while (headRef->next)
	{
		headRef = headRef->next;
	}
	headRef->value = num;
}



void LinkedList() 
{
	list first;
	cout << "Add to end" << endl;
	first.addToEnd(3);
	first.addToEnd(5);
	first.addToEnd(6);
	first.addToBegin(3);

	cout << "list fullfilled " << endl;
	first.show();

	cout << "insert at given position " << endl;
	first.insertPosition(0, 93);
	first.show();

	cout << "swap at given position " << endl;
	first.swapPosition(0, 75);
	first.show();

	int ind = 3;
	cout << "get index of "<<ind<< endl;
	first.getIndex(ind);

	cout << "swap end "<< endl;
	first.swapEnd(22);
	first.show();

	cout << "swap begin" << endl;
	first.swapBegin(93);
	first.show();

	first.sum();

	cout << "delete given position \n";
	first.deleteNode(0);
	first.show();

	cout << "delete last \n";
	first.deleteLast();
	first.show();

	cout << "delete first \n";
	first.deleteFirst();
	first.show();

	first.getIndex(5);
	list *n = new list;//because we have destructor
	*n = first;
	//n->show();

}

////////////////////////////////////////////////////////////////////////////////////////NodeDll
/* Node of a doubly linked list */
struct NodeDll
{
	int val;
	struct NodeDll *next; // Pointer to next node in DLL
	struct NodeDll *prev; // Pointer to previous node in DLL
};

class listDll
{
public:
	NodeDll *head = NULL;
	listDll()
	{};
	void push(int);
	void pushEnd(int);
	void insertAfter(int, int);
	void deleteFirst();
	void deleteLast();
	void deletePosition(int pos);
	void swapBegin(int num);
	void swapEnd(int num);
	void swapPosition(int pos,int num);
	void sum();
	void getIndex(int);
	void print();
	~listDll() {};
};
void listDll::push(int x)
{
	NodeDll *newNode = new NodeDll;
	newNode->val = x;
	newNode->next = head;
	newNode->prev = NULL;
	if (head != NULL)
	{
		head->prev = newNode;
	}
	head = newNode;
};
void listDll::pushEnd(int x) 
{
	NodeDll *newNode = new NodeDll;
	newNode->val = x;
	
	newNode->next = NULL;
	NodeDll *refHead = head;
	if (refHead == NULL) 
	{
		newNode->prev = NULL;
		head = newNode;
		return;
	}
	while (refHead->next!=NULL) 
	{
		refHead = refHead->next;
	}
	refHead->next = newNode;
	newNode->prev = refHead;
}

void listDll::print()
{
	cout << "Forward divertion " << endl;
	NodeDll*n = new NodeDll;
	if(head!=NULL)
	{
		n = head;
		NodeDll *last = new NodeDll;
		while (n != NULL)
		{
			cout << n->val << " ";
			last = n;
			n = n->next;
		}cout << endl;

		cout << "Reverse direction" << endl;
		while (last != NULL)
		{
			cout << last->val << " ";
			last = last->prev;
		}cout << endl;
	}
	else 
	{
		cout << "List is empty" << endl;
	}
	


}
void listDll::insertAfter(int pos, int num)
{
	NodeDll *newNode = new NodeDll;
	newNode->val = num;
	NodeDll *refHead = head;
	if (pos >= 1) 
	{
		
		for (int i = 0;refHead->next!=NULL && i < pos-1; i++) 
		{
			
			refHead = refHead->next;
		}

		if (refHead->next != NULL) 
		{
			newNode->next = refHead->next;
			newNode->next->prev = newNode;
		}
		else 
		{
			newNode->next = NULL;
		}
		refHead->next = newNode;
		newNode->prev = refHead;
	}
	else 
	{
		push(num);
	}
}
void listDll::deleteFirst() 
{
	NodeDll *refHead = head;
	NodeDll *temp = refHead;

	if (refHead != NULL) 
	{
		refHead = refHead->next;
		if (!refHead) 
		{
			delete temp;
			head = refHead;
			return;
		}
		refHead->prev = NULL;
		delete temp;
		head = refHead;
	}
}
void listDll::deleteLast() 
{
	if (head != NULL) 
	{
		NodeDll *refHead = head;
		NodeDll *temp = refHead;

		while (refHead->next!=NULL)
		{
			refHead = refHead->next;
		}
		refHead->prev->next = refHead->next;
		temp = refHead;
		delete temp;
		
	}
}
void listDll::deletePosition(int pos) 
{
	NodeDll *refHead = head;
	NodeDll *temp = refHead;

	if (refHead == NULL) 
	{
		return;
	}

	for (int i = 0; refHead->next != NULL && i < pos - 1; i++)
	{
		refHead = refHead->next;
	}

	if (refHead == temp) 
	{
		refHead = temp->next;//if refhead is head Node
		head = refHead;
		return;
	}
		
/* Change next only if node to be deleted is NOT the last node */
	if (refHead->next != NULL)
		refHead->next->prev = refHead->prev;

/* Change prev only if node to be deleted is NOT the first node */
	if (refHead->prev != NULL)
		refHead->prev->next = refHead->next;

	delete refHead;

}
void listDll::swapBegin(int num) 
{
	head->val = num;

}

void listDll::swapEnd(int num)
{
	NodeDll *refHead = head;
	NodeDll *newNode = new NodeDll;
	newNode->val = num;
	while (refHead->next!= NULL)
	{
		refHead = refHead->next;
	}
	newNode->next = refHead->next;
	newNode->prev = refHead->prev;
	newNode->prev->next = newNode;
	
}

void listDll::swapPosition(int pos, int num)
{
	NodeDll* refHead = head;
	for (int i = 0; refHead != NULL && i < pos; i++)
	{
		refHead = refHead->next;
	}
	refHead->val = num;
}
void listDll::sum()
{
	NodeDll *n = new NodeDll;
	n = head;
	int sum = 0;
	while (n != NULL)
	{
		sum += n->val;
		n = n->next;
	}
	cout << "Sum of elements == " << sum << endl;
}
void listDll::getIndex(int num)
{
	NodeDll *n = new NodeDll;
	n = head;
	int index = 0;	
	if (n->val == num)
	{
		cout << "index of " << num << " == " << index << endl;
		return;
	}
	while (n->val != num)
	{
		index++;
		n = n->next;
		if (n == NULL)
		{
			cout << "There is no such element" << endl;
			break;
			return;
		}
		if (n->val == num)
		{
			cout << "index of " << num << " == " << index << endl;
			break;
			return;
		}
	}

}

void DLLlist()
{
	listDll obj;
	obj.push(1);
	obj.push(3);
	obj.pushEnd(5);
	obj.pushEnd(7);
	obj.pushEnd(8);
	obj.print();
	obj.insertAfter(6, 32);
	obj.print();
	cout << "Delete first " << endl;
	obj.deleteFirst();
	obj.print();
	cout << "Delete last " << endl;
	obj.deleteLast();
	obj.print();
	cout << "Delete position " <<3<< endl;
	obj.deletePosition(3);
	obj.print();

	obj.swapBegin(43);
	obj.print();
	cout << "Swap end " << 574 << endl;
	obj.swapEnd(574);
	obj.print();

	cout << "Swap position " <<1<< endl;
	obj.swapPosition(2, 3242);
	obj.print();

	obj.sum();


	obj.getIndex(3242);
}
//https://www.geeksforgeeks.org/delete-a-node-in-a-doubly-linked-list/
////////////////////////////////////////////////////////////////////////////////////////NodeCircle
struct NodeCircle
{
	int value; 
	NodeCircle * next; 
};
class listCircle
{
public:
	NodeCircle * head;
	listCircle()
	{
		head = NULL;
	}
	void addToEnd(int num);
	void show();
	void addToBegin(int data);
	void insertPosition(int num, int pos);
	void showCircle(int pos);
	void deleteNode(int x);
	void deleteFirst();
	void deleteLast();
	void swapBegin(int);
	void swapEnd(int);
	void swapPosition(int, int);
	void sum();
	void getIndex(int);
	~listCircle() {};
};

void listCircle::show() 
{
	NodeCircle *newNode = head;
	if (head != NULL)
	{
		do {
			cout << newNode->value << " ";
			newNode = newNode->next;
		} while (newNode != head);
		cout << endl;
	}
}
void listCircle::sum() 
{
	int sum = 0;
	NodeCircle *newNode = head;
	if (head != NULL)
	{
		do {
			sum += newNode->value;
			newNode = newNode->next;
			
		} while (newNode != head);
		cout <<"Sum = "<<sum <<endl;
	}
}
void listCircle::getIndex(int num) 
{
	NodeCircle *newNode = new NodeCircle;
	newNode = head;
	int index = 0;
	if (newNode->value == num)
	{
		cout << "index of " << num << " == " << index << endl;
		return;
	}
	while (newNode->value != num)
	{
		index++;
		newNode = newNode->next;
		if (newNode == head)
		{
			cout << "There is no such element" << endl;
			break;
		}
		if (newNode->value == num)
		{
			cout << "index of " << num << " == " << index << endl;
			break;
		}
	}
}
void listCircle::showCircle(int pos) 
{
	NodeCircle *newNode = head;
	cout << "We demonstrate circle" << endl;
	int i = 0;
	while (i <= pos)
	{
		cout << newNode->value << " ";
		newNode = newNode->next;
		if (newNode == head) cout << endl;
		i++;
	}cout << "\n";

}

void listCircle::addToBegin(int data)
{
	struct NodeCircle *ptr1 = (struct NodeCircle *)malloc(sizeof(struct NodeCircle));
	struct NodeCircle *temp = head;
	ptr1->value = data;
	ptr1->next = head;
	
	/* If linked list is not NULL then set the next of last node */
	if (head != NULL)
	{
		while (temp->next != head)
			temp = temp->next;
		temp->next = ptr1;
	}
	else
		ptr1->next = ptr1; /*For the first node */
	head = ptr1;
	
}
void listCircle::deleteFirst() 
{
	if (head != NULL)
	{
		NodeCircle *last = head;
		while (last->next!= head)
		{
			last = last->next;
		}

		NodeCircle *refHead = head;
		NodeCircle *temp = refHead;
		refHead = refHead->next;
		delete temp;
		head = refHead;
		last->next = head;

	}
}
void listCircle::addToEnd(int num) 
{
	NodeCircle*newNode = new NodeCircle;
	newNode->value = num;
	NodeCircle *refHead = head;
	if (head ==NULL) 
	{
		newNode->next = newNode;
		head = newNode;
		return;
	}
	else 
	{
		while (refHead->next!=head) 
		{
			refHead = refHead->next;
		}
		refHead->next = newNode;
		newNode->next = head;
	}
}
void listCircle::deleteLast() 
{
	if (head != NULL)
	{
		NodeCircle*newNode = head;

		while (newNode->next->next != head)
		{
			newNode = newNode->next;
		}

		NodeCircle *last = head;
		while (last->next != head)
		{
			last = last->next;
		}
		newNode->next = head;
		delete last;

	}
}
void listCircle::deleteNode(int pos) 
{
	NodeCircle*refHead = head;
	NodeCircle*temp = head;
	if (refHead == NULL)
	{
		return;
	}
	if (pos == 0)
	{
		deleteFirst();
		return;
	}
	for (int i = 0; i < pos; i++)
	{
		if (refHead->next == head)
		{
			deleteLast();
			return;
		}
		refHead = refHead->next;
	}

	for (int i = 0; i < pos - 1; i++)
	{
		temp = temp->next;
	}
	temp->next = refHead->next;
	delete refHead;
}
void listCircle::swapEnd(int num) 
{
	NodeCircle *refHead = head;
	if (head == NULL)
	{
		cout << "No elements to swap" << endl;
		return;
	}
	else
	{
		while (refHead->next != head)
		{
			refHead = refHead->next;
		}
		refHead->value = num;
	}
}
void listCircle::insertPosition(int num, int pos) 
{
	if (pos >= 1)
	{
		NodeCircle*newNode = new NodeCircle;
		newNode->value = num;

		NodeCircle *refHead = head;
		NodeCircle *temp = refHead;

		for (int i = 0; i < pos - 1; i++)
		{
			refHead = refHead->next;
			//if (refHead == head) break;
		}
		
		for (int i = 0; /*temp != head && */i < pos; i++)
		{
			temp = temp->next;
			//if (temp == head) break;
		}
		refHead->next = newNode;
		newNode->next = temp;
		if (temp== head) 
		{
			newNode->next = head;
		}

	}
	else
	{
		addToBegin(num);
	}
}
void listCircle::swapPosition(int num, int pos) 
{
	NodeCircle *refHead = head;
	for (int i = 0; i < pos; i++)
	{
		refHead = refHead->next;
	}
	refHead->value = num;

}
void listCircle::swapBegin(int num) 
{
	if (head != NULL) 
	{
		head->value = num;
	}
	else 
	{
		cout << "No elements to swap" << endl;
	}
	
}

void CircularLinkedList()
{
	listCircle third;
	
	for (int i = 1; i < 4; i++)third.addToEnd(i);
	//for (int i = 1; i < 4; i++)third.addToBegin(i);
	third.insertPosition(32, 3);
	third.show();
	third.showCircle(5);
	third.sum();
	third.getIndex(2);
	third.swapBegin(99);
	third.swapEnd(45);
	third.show();
	third.swapPosition(56, 4);
	third.show();
	cout << "delete first" << endl;
	third.deleteFirst();
	third.showCircle(4);
	cout << "delete last" << endl;
	third.deleteLast();
	third.showCircle(2);
	cout << "full fill list" << endl;
	for (int i = 1; i < 4; i++)third.addToEnd(i);
	third.show();
	cout << "delete Node 4" << endl;
	third.deleteNode(4);
	third.show();
	third.showCircle(6);
}
//https://www.geeksforgeeks.org/circular-singly-linked-list-insertion/

////////////////////////////////////////////Comparing
void compare() 
{
	forward_list<int> flist;
	forward_list<int>::iterator it;
	long int num = 1000;
	long int TIME = 10000;

	cout << "Push front start " << endl;
	clock_t t;
	t = clock();
	for (int i = 0; i < num; i++)
	{
		flist.push_front(i);
	}
	cout << "Push front end " << endl;
	t = clock() - t;
	cout << "Time = " << float(t) / CLOCKS_PER_SEC << endl;
	

	t = clock();
	cout << "delete the end start " << endl;
	for (int i = 0; i < num; i++)
	{
		flist.reverse();
		it = flist.before_begin();
		it = flist.erase_after(it);
		flist.reverse();
	}
	cout << "delete the end end " << endl;
	t = clock() - t;
	cout << "Time = " << float(t) / CLOCKS_PER_SEC << endl;
	///////////////////////////////////////////////////////////list

	list firstObj;

	t = clock();
	cout << "list add to begin start " << endl;
	for (int i = 0; i < 1000; i++)
		firstObj.addToBegin(i);
	cout << "list add to begin end " << endl;
	t = clock() - t;
	cout << "Time = " << float(t) / CLOCKS_PER_SEC << endl;

	t = clock();
	cout << "list delete begin start " << endl;
	for (int i = 0; i < 1000; i++)
		firstObj.deleteFirst();
	cout << "list delete begin end " << endl;
	t = clock() - t;
	cout << "Time = " << float(t) / CLOCKS_PER_SEC << endl;
	///////////////////////////////////////////////////////////listDLL
	listDll secondObj;
	t = clock();
	cout << "listDll add to begin start " << endl;
	for (int i = 0; i < 1000; i++)
		secondObj.push(i);
	cout << "listDll add to begin end " << endl;
	t = clock() - t;
	cout << "Time = " << float(t) / CLOCKS_PER_SEC << endl;

	t = clock();
	cout << "listDll delete begin start " << endl;
	for (int i = 0; i < 1000; i++)
		secondObj.deleteFirst();
	cout << "listDll delete begin end " << endl;
	t = clock() - t;
	cout << "Time = " << float(t) / CLOCKS_PER_SEC << endl;

	///////////////////////////////////////////////////////////listCircle
	listCircle thirdobj;
	t = clock();
	cout << "listCircle add to begin start " << endl;
	for (int i = 0; i < 1000; i++)
	thirdobj.addToBegin(i);
	cout << "listCircle add to begin end " << endl;
	t = clock() - t;
	cout << "Time = " << float(t) / CLOCKS_PER_SEC << endl;

	t = clock();
	cout << "listCircle add to END start " << endl;
	for (int i = 0; i < 1000; i++)
		thirdobj.addToEnd(i);
	cout << "listCircle add to END end " << endl;
	t = clock() - t;
	cout << "Time = " << float(t) / CLOCKS_PER_SEC << endl;
	

	t = clock();
	cout << "listCircle swapBegin start " << endl;
	for (int i = 0; i < 1000; i++)
		thirdobj.swapBegin(i);
	cout << "listCircle swapBegin end " << endl;
	t = clock() - t;
	cout << "Time = " << float(t) / CLOCKS_PER_SEC << endl;

	t = clock();
	cout << "listCircle deleteFirst start " << endl;
	for (int i = 0; i < 1000; i++)
		thirdobj.deleteFirst();
	cout << "listCircle deleteFirst end " << endl;
	t = clock() - t;
	cout << "Time = " << float(t) / CLOCKS_PER_SEC << endl;


	t = clock();
	cout << "listCircle swapEnd start " << endl;
	for (int i = 0; i < 1000; i++)
		thirdobj.swapEnd(44);
	cout << "listCircle swapEnd end " << endl;
	t = clock() - t;
	cout << "Time = " << float(t) / CLOCKS_PER_SEC << endl;
	//thirdobj.show();



	t = clock();
	cout << "listCircle insert position start " << endl;
	cout << "/////////////////////////////////////////////////////" << endl;
	cout << endl;
	for (int i = 0; i < 1000; i++)
		thirdobj.insertPosition(3*i, i);
	cout << "listCircle insert position end " << endl;
	t = clock() - t;
	cout << "Time = " << float(t) / CLOCKS_PER_SEC << endl;
	thirdobj.show();

	




};




int main()
{
	//forwardListFunc();
	LinkedList();
	//DLLlist();
	//CircularLinkedList();
	//compare();
	
    return 0;
}

