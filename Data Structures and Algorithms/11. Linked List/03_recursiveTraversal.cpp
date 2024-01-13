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

// void printLinkedList(Node *head){
// 	if(head -> next == NULL){
// 		cout << (head -> data) << endl;
// 		return;
// 	}
// 	cout << (head -> data) << " ";
// 	printLinkedList(head -> next);
// }

void printLinkedList(Node *head){
	if(head == NULL){
		cout << endl;
		return;
	}
	cout << (head -> data) << " ";
	printLinkedList(head -> next);
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	Node *head = new Node(10);
	head -> next = new Node(20);
	head -> next -> next = new Node(30);
	head -> next -> next -> next = new Node(40);
	printLinkedList(head);

	return 0;
}	