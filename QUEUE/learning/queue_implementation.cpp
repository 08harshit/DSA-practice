#include <iostream>
using namespace std;
#define Max_size 101
class queue
{
private:
    int A[Max_size];
    int front, rear;

public:
    queue() //HARSHIT SEN
    {
        front = -1;
        rear = -1;
    }
    int isempty()
    {
        return (front == -1 && rear == -1);
    }
    bool isfull()
    {
        return (rear + 1) % Max_size == front ? true : false;
    }
    void enqueue(int x)
    {
        if (isfull())
        {
            cout << "Aur jagah nahi hai!" << endl;
            return;
        }
        else if (isempty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % Max_size;
        }
        A[rear] = x;
    }
    void dequeue()
    {
        if (isempty())
        {
            cout << "pehle se hi khali hai aur kitna khali kargi!" << endl;
        }
        else if (front == rear)
        {
            rear = front = -1;
        }
        else
        {
            front = (front + 1) % Max_size;
        }
    }
    void Print()
    {

        int count = (rear + Max_size - front) % Max_size + 1;
        cout << "Queue       : ";
        for (int i = 0; i < count; i++)
        {
            int index = (front + i) % Max_size;
            cout << A[index] << " ";
        }
        cout << "\n\n";
    }
};
int main()
{
    queue Q;

    Q.enqueue(2);
    Q.Print();
    Q.enqueue(4);
    Q.Print();
    Q.enqueue(6);
    Q.Print();
    Q.dequeue();
    Q.Print();
    Q.enqueue(8);
    Q.Print();
    return 0;
}