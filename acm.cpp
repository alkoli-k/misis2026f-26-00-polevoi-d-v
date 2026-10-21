#include <iostream>
#include <algorithm>
int main()
{
    int n;/*количество элементов в массиве*/
    std::cin>>n;
    int m;/*количество запросов */
    std::cin>>m;
    int mz;/*элементы запроса*/
    std::cin>>mz;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    /*l- начало строки r- конец строки плюс 1*/
    std::sort(a.begin(),a.end());
    

}