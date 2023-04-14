#include <iostream>
using namespace std;
class stack
{
public:
    int *arr;
    int size;
    int top;

    stack(int s)
    {
        this->size = s;
        this->top = -1;
        arr = new int[s];
    }

    void push(int val)
    {
        if (size - top > 0)
        {
            arr[++top] = val;
        }
        else
        {
            cout << "Stack is OverFlow\n";
        }
    }

    int pop()
    {
        int ans;
        if (top == -1)
        {
            cout << "Stack is UnderFlow\n";
            return -1;
        }
        else
        {
            ans = arr[top];
            top = top - 1;
        }
        return ans;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }

    int peek()
    {
        if (top == -1)
        {
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
};
int main()
{
    stack st(5);

    cout << "\nEnter some elements into the stacks : ";
    for (int i = 0; i < 5; i++)
    {
        int ip;
        cin >> ip;
        cout << "Inserting " << ip << " into the stack \n";
        st.push(ip);
    }

    if (st.isEmpty())
    {
        cout << "\nStack is Empty\n";
    }
    else
    {
        cout << "\nStack is not Empty\n";
    }

    cout << "\nPeek Element is : " << st.peek() << endl;

    cout << "\nPopped Element is : " << st.pop() << endl;

    cout << "\nNow stack elements are : ";

    while (!st.isEmpty())
    {

        cout << st.pop() << " ";
    }

    if (st.isEmpty())
    {
        cout << "\nStack is Empty\n";
    }
    else
    {
        cout << "\nStack is not Empty\n";
    }
    return 0;
}