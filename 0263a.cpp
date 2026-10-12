#include <iostream>
#include <cmath>
int main()
{
    int a=0;
    int shet=0;
    std::cin>>a;
    while(a!=1)
    {
        std::cin>>a;
        shet++;
    }
    int x=shet%5;
    int y=shet/5;
    std::cout<<std::abs(2-x)+std::abs(2-y);
    