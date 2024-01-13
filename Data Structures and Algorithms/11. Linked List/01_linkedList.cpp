/*
Problems with Arrays:
- Either size is fixed and pre-allocated(in both fixed and
  variable sized arrays), or the worst case insertion at the end is O(n).
- Insertion in the middle or beginning is costly.
- Deletion in the middle or beginning is costly.
- Implementation of data structures like queue and deque is complex
  with arrays.

'Round Robin Scheduling'

Linked List:

The idea is to drop the contiguous memoroy requirments so that
insertion, deletion can efficiently happen at the middle also.
And no need to pre-alocate the space(no extra node).
It is a linear data structure.

*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next; // self referential structure
	Node(int x){
		data = x;
		next = NULL; 
	}
};

// Traversing linked list
void printLinkedList(Node *head){
	Node *curr = head;
	while(curr != NULL){
		cout << (curr -> data) << " ";
		curr = curr -> next;
	}cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << "Hello World!\n";
	// Creating a 3 node linked list
	// Node *head = new Node(10);
	// Node *temp1 = new Node(20);
	// Node *temp2 = new Node(30);

	// head -> next = temp1;
	// temp1 -> next = temp2;

	// Short Implementation
	Node *head = new Node(10);
	head -> next = new Node(20);
	head -> next -> next = new Node(30);
	head -> next -> next -> next = new Node(40);
	printLinkedList(head);

	return 0;
}	