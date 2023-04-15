#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int s)
    {
        this->size = s;
        this->top1 = -1;
        this->top2 = s;
        arr = new int[s];
    }

    void push1(int val1)
    {
        if ((top2 - top1) > 1)
        {
            arr[++top1] = val1;
        }
        else
        {
            cout << "Stack is OverFlow\n";
        }
    }

    void push2(int val2)
    {
        if ((top2 - top1) > 1)
        {
            arr[--top2] = val2;
        }
        else
        {
            cout << "Stack is OverFlow\n";
        }
    }

    int pop1()
    {
        int ans;
        if (top1 >= 0)
        {
            ans = arr[top1];
            top1 -= 1;
            return ans; 
        }

        else
            return -1;
    }

    int pop2()
    {
        int ans;
        if (top2<size)
        {
            ans = arr[top2];
            top2 += 1;
            return ans;
        }

        else
        
            return -1;
    }

    bool isEmpty()
    {
        if (top1 == -1 && top2 == size)
        {
            return true;
        }
        else
            return false;
            
    }
};
int main()
{

    Stack s1(5);

    s1.push1(1);
    s1.push1(2);
    s1.push1(3);

    s1.push2(100);
    s1.push2(99);

    cout << "Stack Elements are : ";

    while (!s1.isEmpty() && s1.pop1()!=-1)
    {
        cout << s1.pop1() << " ";
     
    }

    cout << "\nStack Elements are : ";
    while (!s1.isEmpty() && s1.pop2()!=-1)
    {
        cout << s1.pop2() << " ";
        
    }

    return 0;
}