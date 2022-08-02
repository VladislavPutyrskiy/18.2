
#include <iostream>

int rabbit_stairjumper(int n)
{
    if (n < 0) return 0;
    if (n == 0) return 1;
    return rabbit_stairjumper(n - 1) + rabbit_stairjumper(n - 2) + rabbit_stairjumper(n - 3);
}

int main() 
{   
    std::cout << rabbit_stairjumper(8);
}