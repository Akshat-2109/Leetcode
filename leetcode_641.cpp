// Design Circular Deque
#include<iostream>
#include<vector>
using namespace std;

class MyCircularDeque {
public:
    vector<int> q;
    int front, rear, size, capacity;

    MyCircularDeque(int k) {
        q.resize(k);
        front = 0;
        rear = -1;
        size = 0;
        capacity = k;
    }

    bool insertFront(int value) {
        if (isFull()) {
            return false;
        }

        if (isEmpty()) {
            front = rear = 0;
        }
        else {
            front = (front - 1 + capacity) % capacity;
        }

        q[front] = value;
        size++;

        return true;
    }

    bool insertLast(int value) {
        if (isFull()) {
            return false;
        }

        if (isEmpty()) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % capacity;
        }

        q[rear] = value;
        size++;

        return true;
    }

    bool deleteFront() {
        if (isEmpty()) {
            return false;
        }

        if (size == 1) {
            front = 0;
            rear = -1;
        }
        else {
            front = (front + 1) % capacity;
        }

        size--;
        return true;
    }

    bool deleteLast() {
        if (isEmpty()) {
            return false;
        }

        if (size == 1) {
            front = 0;
            rear = -1;
        }
        else {
            rear = (rear - 1 + capacity) % capacity;
        }

        size--;
        return true;
    }

    int getFront() {
        if (isEmpty()) {
            return -1;
        }

        return q[front];
    }

    int getRear() {
        if (isEmpty()) {
            return -1;
        }

        return q[rear];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }
};