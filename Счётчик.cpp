#include <iostream>
#include <Windows.h>

using namespace std;

class Counter
{
private:
    int count;
public:
    Counter()
    {
        this->count = 1;
    }
    Counter(int count)
    {
        this->count = count;
    }

    void increase()
    {
        ++count;
    }
    void decrease()
    {
        --count;
    }
    void printCount()
    {
        cout << count << endl;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string counterFirst;
    char command = '+';
    int firstValueCount = 1;

    Counter count;

    do
    {
        cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        cin >> counterFirst;

        if (counterFirst == "да")
        {
            cout << "Введите начальное значение счётчика: ";
            cin >> firstValueCount;

            Counter count2(firstValueCount);
            count = count2;
            
            break;
        }
        else if (counterFirst == "нет")
        {
            break;
        }
        else
        {
            cout << "Данные введены неверно!" << endl;
        }

    } while (true);

    while (command != 'x')
    {
        cout << "Введите команду ('+', '-', '=' или 'x'): ";
        cin >> command;

        if (command == '+')
        {
            count.increase();
        }
        else if (command == '-')
        {
            count.decrease();
        }
        else if (command == '=')
        {
            count.printCount();
        }
        else if (command == 'x')
        {
            cout << "До свидания!";
        }
        else
        {
            cout << "Некорректная команда!";
        }
    }
}
