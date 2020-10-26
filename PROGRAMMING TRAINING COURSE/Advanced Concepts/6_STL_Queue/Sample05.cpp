#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> myqueue;
    myqueue.emplace(1);
    myqueue.emplace(2);
    myqueue.emplace(3);
    myqueue.emplace(4);
    myqueue.emplace(5);
    myqueue.emplace(6);

    while (!myqueue.empty()) {
        cout << ' ' << myqueue.front();
        myqueue.pop();
    }
    return 0;
}
/* Output */
// 1 2 3 4 5 6
