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

void printLinkedList(Node *head){
	Node *curr = head;
	while(curr != NULL){
		cout << (curr -> data) << " ";
		curr = curr -> next;
	}cout << endl;
}

Node *insertBegin(Node *head, int data){
	Node *temp = new Node(data);
	temp->next = head;
	return temp;
}

Node *insertEnd(Node *head, int data){
	Node *temp = new Node(data);
	if(head == NULL){

	}
	Node *curr = head->next;
	while(curr->next != NULL){
		curr = curr->next;
	}
	curr->next = temp;
	return head;

}

int main(){
#ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
#endif
	cout << "Hello World!\n";

	Node *head = new Node(10);
	head -> next = new Node(20);
	head -> next -> next = new Node(30);
	head -> next -> next -> next = new Node(40);
	printLinkedList(head);

	head = insertBegin(head, 5);
	printLinkedList(head);

	head = insertEnd(head, 45);
	printLinkedList(head);

	return 0;
}	