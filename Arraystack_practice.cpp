#include<iostream>
using namespace std;

class ArrayStack 
{
    int arr[100];
    int top = -1;
public:
bool isEmpty() 
    {
        return top == -1;
    }
bool isFull() 
    {
        return top == 100 - 1;
    }
void push(int x) 
    {
        if (isFull()) 
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }        
    int pop() 
    {
        if (isEmpty()) 
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return arr[top--];
    }
};

int main() 
{
    ArrayStack stack;
    stack.push(10);
    stack.push(20);
    cout << stack.pop() << endl;
    cout << stack.pop() << endl; 
    cout << stack.pop() << endl; 
    return 0;
}