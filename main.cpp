#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!" << std::endl;
    int p = 1;
    int i = 1;
    while (i <= 10)
    {
        p += i;
        i++
    }
    std::cout << "p = " << p << " i = " << i << std::endl;
    system("pause");
    return 0;
}