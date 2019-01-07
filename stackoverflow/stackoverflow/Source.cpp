#include <iostream>
using namespace std;

struct Link
{
	int data;
	Link* prev;
};
class Stack
{
private:
	Link* first;
public:
	Stack()
	{
		first = NULL;
	}
	~Stack()
	{
		delete first;
	}
	void push(int d);
	void pop();
	void show();
};
void Stack::push(int d) // adding new element in stack
{
	if (first == NULL)
	{
		first = new Link;
		first->data = d;
		first->prev = NULL;
	}
	else
	{
		Link* newlink = new Link;
		newlink->data = d;
		newlink->prev = first;
		first = newlink;
	}
}
void Stack::pop() // deleting last element of stack
{
	first = first->prev;
}
void Stack::show() // showing our stack
{
	Link* tmp = first;
	while (tmp != NULL)
	{
		cout << tmp->data << endl;
		tmp = tmp->prev;
	}
}

int main()
{
	Stack st;
	for (int i = 0; i <= 33;)
	{
		st.push(i);
		i += 11;
	}
	st.pop(); 
	st.show();
	system("pause");
}
