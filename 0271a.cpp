#include <iostream>
int main()
{
  int num;
  std::cin>>num;
  for(int i=num+1;i<9999;i++ )
  {
    int c1=i/1000;
    int c2=i/100%10;
    int c3=i/10%10;
    int c4=i%10;
    if(c1!=c2 && c1!=c3 && c1!=c4 && c2!=c3 && c2!=c4 && c3!=c4)
    {
      std::cout<<i;
      return 0;
    }
  }
  
}