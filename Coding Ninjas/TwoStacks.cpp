#include <bits/stdc++.h>
using namespace std;

class TwoStack
{

public:
    int *arr;

    int top1;

    int top2;

    int size;

    // Initialize TwoStack.

    TwoStack(int s)
    {

        this->size = s;

        arr = new int[size];

        top1 = -1;

        top2 = s;
    }

    // Push in stack 1.

    void push1(int num)
    {

        if (top2 - top1 > 1)
        {

            top1++;

            arr[top1] = num;
        }
    }

    // Push in stack 2.

    void push2(int num)
    {

        if (top2 - top1 > 1)
        {

            top2--;

            arr[top2] = num;
        }
    }

    // Pop from stack 1 and return popped element.

    int pop1()
    {

        if (top1 > -1)
        {

            int temp = arr[top1];

            top1--;

            return temp;
        }

        return -1;
    }

    // Pop from stack 2 and return popped element.

    int pop2()
    {

        if (top2 < size)
        {

            int temp = arr[top2];

            top2++;

            return temp;
        }

        return -1;
    }
};