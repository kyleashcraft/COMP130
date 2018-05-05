#ifndef INTSTACK_H
#define INTSTACK_H

struct stackItem {
	stackItem(int);
	int value;
	stackItem *rlink;
	stackItem *llink;
};

class StackOfIntegers {
public:
	StackOfIntegers();
	bool empty() const;
	int peek() const;
	void push(int);
	int pop();
	int getSize() const;
private:
	stackItem *first;
	stackItem *last;
	int size;
};

#endif