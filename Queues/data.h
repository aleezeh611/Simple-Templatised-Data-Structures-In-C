/*
	submitted by: Aleezeh Usman
	Roll Number: 18I-0529
	Lab Task 7
	-->data class which will be the basic node of each Queue element

*/
#pragma once
#include<iostream>


template<typename T>
class data_{
public:
	T val;
	data_<T>* next;

	data_() {
		val = 0;
		next = NULL;
	}
	data_(T x) {
		val = x;
	}
};

