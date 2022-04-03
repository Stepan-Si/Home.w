//2.Написать функцию, которая проверяет, является ли переданное ей число простым. 
// Число называется простым, если оно делится без остатка только на себя и на единицу.

#include <iostream>
#include <windows.h>
using namespace std;

void IsPrime(int num);

int main()
{
    IsPrime(19);
    system("pause >> NUL");
}
void IsPrime(int num)
{
    bool IsPrime = true;
    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            IsPrime = false;
    }
    if (!IsPrime)
        cout << "false" << "\n";
    else
        cout << "true" << "\n";
    cout << endl;
}
