#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> idishlar;

    // Element qo'shish
    idishlar.push("Likopcha 1");
    idishlar.push("Likopcha 2");
    idishlar.push("Likopcha 3");

    cout << "Eng tepadagi idish: " << idishlar.top() << endl;

    // Tepasidagini olish
    idishlar.pop();
    cout << "Bitta olib tashlangandan keyin: " << idishlar.top() << endl;

    return 0;
}
