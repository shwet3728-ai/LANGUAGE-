#include <iostream>
using namespace std;
#define MAX 5

class myQueue
{
private:
    int q[MAX];
    int front = -1, rear = -1;

public:
    int length()
    {
        if (isEmpty())
            return 0;
        return rear - front + 1;
    }
    bool isEmpty()
    {
        return front == -1 && rear == -1;
    }
    bool isFull()
    {
        return rear == MAX - 1;
    }
    void enqueue(int item)
    {
        if (isFull())
        {
            cout << "Overflow Error! cannot insert item" << endl;
            return;
        }
        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }
        q[rear] = item;
        cout << item << " inserted" << endl;
    }
    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Underflow error!" << endl;
            return -1;
        }
        int item = q[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
        return item;
    }
    void print()
    {
        cout << "Front: " << front << endl
             << "Rear: " << rear << endl
             << "Length: " << length() << endl
             << "Queue: ";
        if (isEmpty())
            cout << "Empty" << endl;
        else
        {
            for (int index = front; index <= rear; index++)
            {
                cout << q[index] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    myQueue roll;
    roll.print();
    roll.enqueue(52);
    roll.enqueue(58);
    roll.enqueue(43);
    roll.print();
    cout << "Dequeued: " << roll.dequeue() << endl;
    roll.print();
    return 0;
}
