#include <iostream>

using namespace std;

struct Stack{
int capacity;
int top;
int stack[];
void Createstack(){
printf("Capacity of stack: ");
scanf("%d", &capacity);
printf("Top element: ");
scanf("%d", &top);
int stack[capacity];
}

bool IsFull(int capacity){
if (top >= capacity -1)
    return true;
     else return false;
}

bool IsEmpty(){
if (top == -1) return true;
else return false;
}

void Push(int stack[], int value, int capacity){
if (IsFull(capacity) == true)
    printf("Stack is full. Overflow condition.");
else {
    stack[top] = value;
    top++;
}
}

void Pop(){
    if (IsEmpty() == true)
        printf("Stack is empty. Underflow condition");
    else top--;
}

int Size(int top){
return top+1;
}

int Top(int stack[]){
return stack[top];
}
};



int main()
{
Stack A;
A.Createstack();

printf("Size of stack: %d\n", A.Size(A.top));

if(A.IsEmpty() == 1 ) printf("Stack is empty\n");
else printf("Stack is not empty\n");

A.Push(A.stack, 5, A.capacity);
printf("Size of stack: %d\n", A.Size(A.top));

A.Pop();
printf("Size of stack: %d\n", A.Size(A.top));
    return 0;
}
