#include <iostream>
#include <algorithm>
int main()
{
    int n;
    if (!(std::cin >> n)) return 0;
    char a[100];
    while(n>0)
    {
        int point=0;
        for(int i=0;i<100;i++)
        {
            if (!(std::cin >> a[i])) return 0;
            int x=i%10;
            int y=i/10;
            if(a[i]=='X')
            {
                int ring=std::min({x,y,9-x,9-y});
                point+=(ring+1);
            }
        }
        std::cout<<point<<'\n';
        n--;
    }
}