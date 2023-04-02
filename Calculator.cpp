#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    double x = 0.0;
    double y = 0.0;
    double result;
    char oper = ' ';

    cout << "Калькулятор С++\n";
    cout << "Ввод:";

    while (true)
    {
        cin >> x >> oper >> y;
        if ((y == 0) && ((oper == ':') || (oper == '/'))) {
            cout << "Извини, но делить но ноль нельзя Т_Т";
                continue;
        }
        else {
            switch (oper)
            {
            case '+':
                result = x + y;
                    break;
            case '-':
                result = x - y;
                break;
            case 'x':
                result = x * y;
                break;
            case ':':
                result = x / y;
                break;
            case '*':
                result = x * y;
                break;
            case '/':
                result = x / y;
                break;
            default:
                result = 0.0;
            }
        }
        cout << "Вывод: " << result << endl;
    } return 0;
}

