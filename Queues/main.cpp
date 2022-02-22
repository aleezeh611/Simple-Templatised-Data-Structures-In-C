#include"task2.h"
#include"task3.h"
#include"data.h"
#include<string>

int main() {
	S_Queue<char> sq;
	string s;
	getline(cin,s);
	sq.InputQueues(s);
	sq.displayArr();
	Queue<char> qnew= sq.returnSingleQueue();
	cout << endl;
	cout<<qnew.compareQueuewithString(s);

}