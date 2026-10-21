#include <iostream>
#include <string>
int main()
{
    int n;
    std::string a;
    int rx = 0;
    int shet = 0;
    std::cin >> n;
    std::cin >> a;  
    for (int i = 0; i < n; i++)
    { if (a[i] == 'x') {
            rx++;
            if (rx >= 3)
            {
                shet++;
            }
        }
        else {
            rx = 0;
        }
    }
    std::cout << shet;
}

