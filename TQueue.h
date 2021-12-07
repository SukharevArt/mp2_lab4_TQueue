#pragma once

template<class T>
class TQueue {

private:

	int MaxSize;
	int head, tail;
	T* pArr;
	int tsize;

	int NextIndex(int a) {
		return (a + 1) % MaxSize;
	}
public:

	TQueue(int _size = 10):MaxSize(_size),head(0),tail(-1),tsize(0) {
		if (MaxSize <= 0)
			throw "Incorrect size";
		pArr = new T[MaxSize];
	}
	TQueue(const TQueue& a) :MaxSize(a.MaxSize), head(a.head), tail(a.tail),tsize(a.tsize) {
		pArr = new T[MaxSize];
		for (int i = 0; i < MaxSize; i++)
			pArr[i] = a.pArr[i];
	}
	TQueue& operator=(const TQueue & a);	
	~TQueue() {
		delete[] pArr;
	}
	bool empty() {
		return tsize == 0;
	}
	bool full() {
		return tsize == MaxSize;
	}
	void push(T val) {
		if (full()) {
			throw "Full Empty";
		}
		tail = NextIndex(tail);
		pArr[tail] = val;
		tsize++;
	}
	T front() {
		if (empty()) {
			throw "EmptyQueue";
		}
		return pArr[head];
	}
	T pop() {
		if (empty()) {
			throw "EmptyQueue";
		}
		tsize--;
		T val=pArr[head];
		head = NextIndex(head);
		return val;
	}

};

template<class T>
TQueue<T>& TQueue<T>::operator=(const TQueue<T> & a){
		if (MaxSize != a.MaxSize) {
			delete[] pArr;
			MaxSize = a.MaxSize;
			pArr = new T[MaxSize];
		}
		tsize = a.tsize;
		head = a.head;
		tail = a.tail;
		for (int i = 0; i < MaxSize; i++)
			pArr[i] = a.pArr[i];
		return *this;
}