#ifndef STACK_H
#define STACK_H
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
struct STACK{
	int arr[MAX];
	int top=-1;
	// Pushing an element into the stack
	void push(int val){
		if(isfull()){
			cout<<"stack is full\n";
			return;
		}
		arr[++top]=val;
	}
	// Poping the top element
	int pop(){
		if(isempty()){
			cout<<"stack empty\n";
			return -1;
		}
		return arr[top--];
	}
	// Peek at the top element
	int peek(){
		if(isempty()){
			cout<<"stack is empty\n";
			return -1;
		}
		return arr[top];
	}
	// Check if the stack is empty
	bool isempty(){
		return top==-1;
	}
	// Check if the stack is full
	bool isfull(){
		return top==MAX - 1;
	}
	// Display all elements
	void display() {
		if (isempty()){
			cout<<"stack is empty\n";
			return;
		}
		for(int i=top;i>=0;i--){
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
};
#endif
