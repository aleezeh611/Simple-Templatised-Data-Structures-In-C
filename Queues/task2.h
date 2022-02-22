/*
	submitted by: Aleezeh Usman
	Roll Number: 18I-0529
	Lab Task 7
	-->task2

*/

#pragma once
#include<iostream>
#include"task1.h"
using namespace std;

template<typename T>
class S_Queue {
	Queue<T>* arr;
	int size;
public:
	S_Queue() {
		arr = NULL;
	}
	void InitialzeQueues(int size) {
		arr = new Queue<T>[size];
		this->size = size;
	}
	void InputQueues(string s) {
		//first convert to data_ 
		int in = 0;
		size = 1;
		for (int i = 0; s[i] != '\0'; i++) {
			in++;			//get length of string
			if (s[i] == ' ') size++;
		}
		InitialzeQueues(size);
		data_<T>* dt = new data_<T>[in];
		for (int i = 0; i < in; i++) {
			dt[i].val = s[i];
		}
		int q_i = 0;
		for (int i = 0; i < in && q_i<size; i++) {
			if (dt[i].val == ' ') q_i++;
			else arr[q_i] + dt[i];
		}
	}
	void displayArr() {
		cout << endl;
		for (int i = 0; i < size; i++) {
			arr[i].display();
		}
	}
	Queue<T> returnSingleQueue() {
		Queue<T> toReturn;
		data_<T> sp;
		sp.val = ' ';
		toReturn.setHead(arr[0]);
		toReturn + sp;
		for (int i = 1; i < size; i++) {
			toReturn.setTail(arr[i]);
			toReturn + sp;

		}
		return toReturn;
	}
};