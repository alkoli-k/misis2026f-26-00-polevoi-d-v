#include <iostream>
int main()
{
    int rest,time;
    std::cin>>rest>>time;
    int max_udovolstv=-100000;
    for(int i=0;i<rest; i++)
    {
        int ri, ti;
        std::cin>>ri>>ti;
        int udovolstv;
        if (ti>time)
        {
            udovolstv=ri-(ti-time);
        }
        else
        {
            udovolstv=ri;
            
        }
        if(udovolstv>max_udovolstv)
        {
            max_udovolstv=udovolstv;
        }

    }
    std::cout<<max_udovolstv;

}
