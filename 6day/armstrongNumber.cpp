#include <iostream>
#include <math.h>
using namespace std;
bool isArmstrong(int n)
{
    int temp = n;
    int count = 0;
    while (n != 0)
    {
        /* code */
        count++;
        n = n / 10;
    }
    int temp2 = temp;
    int res = 0;
    while (temp2 != 0)
    {
        /* code */
        int rem = temp2 % 10;
        res = res + (int)pow(rem, count);
        temp2 /= 10;
    }
    if (res == temp)
    {
        return true;
    }
    return false;
}
int main()
{
    cout << "armstrong "<<isArmstrong(153);
}