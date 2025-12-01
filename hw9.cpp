#include <iostream>

int main()
{
    int sum = 0;
    for (int i=1;i<6;i++){
        std::cout << "現在i值:" << i << std::endl;
        sum = sum + i;
        std::cout << "回圈內SUM值:" << sum << std::endl;
    }
    std::cout << "1+..+5 總合為:" << sum;

    return 0;
}