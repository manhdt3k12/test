#include <iostream>

const int h()
{
    return 1;
}

int main()
{
    const int j = h();
    int k = h();
    return 0;
}