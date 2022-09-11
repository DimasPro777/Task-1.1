#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");
    float a, b, c;
    cout << "Введите переменные a и b: ";
    cin >> a >> b;
    if (b == 0)
    {
        cout << "Ошибка";
    }
    else
    {
        cout << "Сумма = " << a + b;
        cout << "Разность = " << a - b;
        cout << "Произведение = " << a * b;
        c = a / b;
        cout << "Частное = " << c;
    }
    return 0;
}
