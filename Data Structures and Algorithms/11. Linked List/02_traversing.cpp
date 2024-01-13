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
	while(head != NULL){
		cout << (head -> data) << " ";
		head = head -> next;
	}cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
#endif

	// Node *head = new Node(10);
	// head -> next = new Node(20);
	// head -> next -> next = new Node(30);
	// head -> next -> next -> next = new Node(40);
	// printLinkedList(head);
	
	// Guess the output
	Node *head = new Node(10);
	printLinkedList(head);
	printLinkedList(head);

	// 10 10
	// Why? Because head is not passed as reference in C++, it is passed as value
	
	printf("Hello ECE!\n");


	return 0;
}	