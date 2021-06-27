#include <iostream>
#include <string>
using namespace std;

using namespace std;
class LR {
public:
    string stroka(string c) {
        string a = ""; // обозначение пустой строки
        for (int i = 0; i < c.size(); i++) { //цикл для размерности строки
            if (a.size() && a.back() == c[i]) { //back возвращается последний элемент, size вовращает длину строки
                continue; // переделает управление строке
            }
            a += c[i]; // сжатие
        }
        return a;
    }
};
int main() {
    setlocale(LC_ALL, "RU");
    string a;
    LR b;
    cout << "Введите слово/букву - ";
    cin >> a;
    cout << (b.stroka(a)) << " - Сжатая слово/буква" << endl;
    cout << endl;
    system("pause");
    return 0;
