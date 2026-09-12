#include <iostream>

int main()
{
   int x=0;
   
   std::cin>>x;
   int a=x/5;
   if(x%5>0){
     a+=1;
   }
   std::cout<<a;
}