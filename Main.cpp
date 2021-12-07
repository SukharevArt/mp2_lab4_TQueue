
#include"TQueue.h"
#include<iostream>

using namespace std;

int main() {
	TQueue<int> q(10);
	cout << q.empty() << "\n";
	q.push(5);
	cout << q.front() << '\n';
	q.pop();
	cout << q.empty() << "\n";
	for (int i = 6; i < 16; i++)
		q.push(i);
	cout << q.full() << '\n';
	cout << q.front() << "\n";
	for (int i = 0; i < 10; i++)
		q.pop();
	cout << q.empty() << '\n';

	return  0;
}