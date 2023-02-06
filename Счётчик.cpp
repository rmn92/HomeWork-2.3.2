#include <iostream>
#include <Windows.h>

using namespace std;

class Counter
{
private:
    int count = 1;
public:
    Counter()
    {

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
    void setCount(int value)
    {
        count = value;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string counterFirst;
    char command = '+';
    int firstValueCount = 0;

    Counter count;

    cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    cin >> counterFirst;

    if (counterFirst == "да")
    {
        cout << "Введите начальное значение счётчика: ";
        cin >> firstValueCount;
        count.setCount(firstValueCount);
    }
    else if (counterFirst != "нет")
    {
        cout << "Данные введены неверно!" << endl;
    }

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
    }
    
}
