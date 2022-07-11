#include <iostream>
using namespace std;

class calculator {
private:
    double num1;
    double num2;
public:
    bool set_num1(double num1) {
        if(num1!=0)this->num1 = num1;
        if (num1 == 0) {
            return false;
        }
        else return true;
    }
    bool set_num2(double num2) {
        if (num2 != 0)this->num2 = num2;
        if (num2 == 0) {  
            return false;
        }
        else return true;
    }
    double add() {
        return num1 + num2;
    }
    double multiply() {
        return num1 * num2;
    }
    double subtract_1_2() {
        return num2 - num1;
    }
    double subtract_2_1() {
        return num1 - num2;
    }
    double divide_1_2() {
        return num1 / num2;
    }
    double divide_2_1() {
        return num2 / num1;
    }
};

int main()
{
    setlocale(LC_ALL, "rus");
    calculator s1;
    double num1 = 0;
    double num2 = 0;
    while (true) {
        cout << "Введите num1: ";
        cin >> num1;
        s1.set_num1(num1);
        cout << "Введите num2: ";
        cin >> num2;
        s1.set_num2(num2);
        if (s1.set_num1(num1) == 0 || s1.set_num2(num2) == 0) {
            cout << "Неверный ввод!" << endl; continue;
        }
        cout << "num1 + num2 = " << s1.add() << endl;
        cout << "num1 - num2 = " << s1.subtract_2_1() << endl;
        cout << "num2 - num1 = " << s1.subtract_1_2() << endl;
        cout << "num1 * num2 = " << s1.multiply() << endl;
        cout << "num1 / num2 = " << s1.divide_1_2() << endl;
        cout << "num2 / num1 = " << s1.divide_2_1() << endl;

    }
    return 0;
}