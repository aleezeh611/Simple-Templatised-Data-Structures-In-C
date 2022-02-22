
#pragma once
#include<iostream>
#include"data.h"
using namespace std;

template<typename T>
class Queue {
	data_<T>* head;
	data_<T>* tail;
public:
	//constructor
	Queue() {
		head = NULL;
		tail = NULL;
	}

	//Insert and Remove
	void  operator+(data_<T> d) {
		if (head == NULL && tail == NULL) {				//inserting into an empty list
			head = new data_<T>;
			head->val = d.val;
			tail = head;
		}
		else if (head != NULL) {					//not empty so head not changed only tail changed
			tail->next = new data_<T>;
			tail = tail->next;
			tail->val = d.val;
		}
	}
	data_<T> operator-() {
		return dequeue();
	}
	data_<T> dequeue() {
		if (!E()) {
			data_<T>* temp = head;
			if (head == tail) {					//only one element in list
				head = tail = NULL;
				return *temp;
			}
			else if (head != tail) {			//more than one element in list
				head = head->next;
				return *temp;
			}
		}
		else cout << "<<<<List is empty>>>>\n";
	}

	//utility functions
	void display() {
		if (!E()) {
			data_<T>* temp = head;
			while (temp != NULL) {
				cout << temp->val;
				temp = temp->next;
			}
			cout << endl;
		}
		else cout << "<<<<List is empty>>>>\n";

	}
	bool E() {
		if (head == tail && tail == NULL)return true;
		else return false;
	}
	void C() {
		while (head != NULL) {
			-(*this);
		}
	}
	bool compare(data_<char> dt[]) {
		data_<T>* temp = head;
		int i = 0;
			while (temp != NULL) {
				if (temp->val != dt[i].val) return false;
				i++;
				temp = temp->next;
			}
			return true;
	}
	data_<T>* getHead() {
		return head;
	}
};