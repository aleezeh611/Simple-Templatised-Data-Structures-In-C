/*
	submitted by: Aleezeh Usman
	Roll Number: 18I-0529
	Lab Task 7
	-->task3

*/
#pragma once
#include"task1.h"

template<typename T>
class QeueuWithHash :public Queue<T> {
public:

	int getLength() {
			data_<T>* temp;
			temp = this->getHead();
			int in = 0;
			while (temp != NULL) {
				in++;
				temp = temp->next;
			}
			return in;
	}
};