#include<iostream>
using namespace std;

const int MAX=5;
class queue
{
    private:
    int a[MAX];
    int front;
    int rear;

    public:
    queue()
    {
        front=-1;
        rear=-1;
    }

    int empty(void)
    {
        if(front==-1 && rear==-1)
        {
            return 1;
        }
        else{
            return 0;
        }
    }

    int full(void)
    {
        if(rear==MAX-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void enqueue(int x)
    {
        if (full())
        {
            cout<<"\nQueue id full";
            return;
        }
        if(front==-1 && rear==-1)
        {
            front++;
            rear++;
        }
        else
        {
            rear++;
        }
        a[rear]=x;
    }
    int dequeue(void)
    {
        if(empty())
        {
            cout<<"\nQueue is empty";
            return-1;
        }
        int x=a[front];
            if (front==rear)
            {
                front=-1;
                rear=-1;
            }
            else{
                front++;
            }
            return x;
        }
        int peek(void)
        {
            if(empty())
            {
                cout<<"\nQueue is empty";
                return -1;
            }
            return a[front];
        }
        void display(void)
        {
            if(empty())
            {
                cout<<"\nQueue is empty";
                return;
            }
            cout<<"\nQueue elememts:";
            for(int i=front;i<=rear;i++)
            {
                cout<<"\t"<<a[i];
            }
        }
    };
    int main()
    {
        int x;
        queue q;
        q.enqueue(55);
          q.enqueue(57);
           q.enqueue(65);
              q.enqueue(97);
                q.enqueue(99);

                q.display();
                if(!q.empty())
                {
                    x=q.dequeue();
                    cout<<"\nRemoved:"<< x;
                }
                q.display();
                x=q.peek();
                cout<<"\nFront element is:"<<x;
                return 0;


                
    }



/*PS D:\yash jagtap s3> cd "d:\yash jagtap s3\" ; if ($?) { g++ Queue_using_arry.cpp -o Queue_using_arry } ; if ($?) { .\Queue_using_arry }

Queue elememts: 55      57      65      97      99
Removed:55
Queue elememts: 57      65      97      99
Front element is:57*/
