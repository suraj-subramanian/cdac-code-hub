// Suraj Subramanian
// Program to implement stack data structure using array

#include <iostream>
using namespace std;

class Stack
{
private:
    int *_stack;
    int _top;
    int _size;

public:
    Stack(int);     // Constructor to create stack of give size
    void push(int); // Push data into stack
    void pop();     // Pop data from stack
    int top();      // Get the data on top of stack
    bool isEmpty(); // check if stack is empty
    bool isFull();  // check if stack is full
    ~Stack();       // Destructor
};

Stack::Stack(int size)
{
    _size = size;
    _stack = new int[size];
    _top = -1;
}

bool Stack::isEmpty()
{
    if (_top == -1)
        return true;
    return false;
}

bool Stack::isFull()
{
    if (_top == _size - 1)
        return true;
    return false;
}

void Stack::push(int data)
{
    if (!isFull())
        _stack[++_top] = data;
    else
        cout << "Stack Overflow!\n";
}

void Stack::pop()
{
    if (!isEmpty())
        _top--;
    else
        cout << "Stack Underflow!\n";
}

int Stack::top()
{
    return _stack[_top];
}

Stack::~Stack()
{
    delete[] _stack;
}

int main()
{

    Stack *s = new Stack(5);

    s->push(10);
    s->push(20);
    s->push(30);
    s->push(40);
    s->push(50);
    s->push(60);

    cout << s->top() << endl;

    s->pop();

    cout << s->top() << endl;

    s->pop();
    s->pop();
    s->pop();
    s->pop();
    s->pop();

    return 0;
}