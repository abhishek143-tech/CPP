// #include <bits/stdc++.h> //arrays
// using namespace std;
// struct Mystack
// {
//     int *arr;
//     int cap, top;
//     Mystack(int n)
//     {
//         cap = n;
//         arr = new int[cap];
//         top = -1;
//     }

//     //add element to the stack
//     void push(int ele)
//     {
//         if (top == cap - 1)
//         {
//             cout << "stack overflow" << endl;
//             return;
//         }
//         top++;
//         arr[top] = ele;
//     }

//     //to remove element from stack
//     int pop()
//     {
//         if (top == -1)
//         {
//             cout << "stack underflow" << endl;
//             return INT_MIN;
//         }
//         int res = arr[top--];
//         return res;
//     }

//     //to get top element / lastly inserted element of stack
//     int peek()
//     {
//         int res = arr[top];
//         return res;
//     }

//     int size()
//     {
//         return (top + 1);
//     }

//     bool isEmpty()
//     {
//         return (top == -1);
//     }
// };
// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     Mystack s(5);
//     s.push(5);
//     s.push(10);
//     s.push(20);
//     cout << s.pop() << endl;
//     cout << s.size() << endl;
//     cout << s.peek() << endl;
//     cout << s.isEmpty() << endl;

//     return 0;
// }

// //vector implementation

#include <bits/stdc++.h>
using namespace std;
struct myStack
{
    vector<int> vec;
    int top, cap;

    void push(int n)
    {
        vec.push_back(n);
    }

    int pop()
    {
        int res = vec.back();
        vec.pop_back();
        return res;
    }

    int peek()
    {
        return vec.back();
    }

    int size()
    {
        return vec.size();
    }

    bool isEmpty()
    {
        return vec.empty();
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    myStack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;

    return 0;
}
