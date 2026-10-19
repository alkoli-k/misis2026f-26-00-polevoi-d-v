#include <iostream>
#include <vector>

int main()
{

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    
    while (t--)
    {
        int n;
        std::cin >> n;
        int mnozg = 1;
        std::vector<int> a;
        
        while (n > 0)
        {
            int c1 = n % 10;
            if (c1 != 0) {
                a.push_back(c1 * mnozg);
            }
            n = n / 10;
            mnozg *= 10;
        }
        
        std::cout << a.size() << '\n';
        for (int i = 0; i < a.size(); i++)
        {
            std::cout << a[i] << ' ';
        }
        std::cout << '\n';
    }
}
