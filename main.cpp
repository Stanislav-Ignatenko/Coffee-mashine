//На Главном меню отображается текущий баланс Покупателя и следующие кнопки выбора:
//«1 – Deposit money»,
//«2 – Espresso <цена>»,
//«3 – Cappuccino <цена>»,
//«4 – Latte <цена>», предназначенные для Покупателя, и кнопка
//«5 – Service» – для Представителя сервиса.
//И (или) в случае отсутствия стаканчиков в автомате отображается фраза «We are very sorry but there are no cups left» и кнопка «5 – Service» – для Представителя сервиса.

#include <iostream>
# define EXPRESSO 1.50
# define CAPPUCCINO 2.20
# define LATTE 2.80
using namespace std;

void printText(string massage);
void printTextWithEndl(string massage);
void printResult(string massage, double parametr);
double money(double a);


int main() {
    
    int buyersBalance = 0;
    
    printText("Plese, put in the money: ");
    cin >> buyersBalance;
    printResult("You have: ", money(buyersBalance));
    printTextWithEndl("Please make a selection: ");
    printTextWithEndl("1. Espresso 1.50 BYN");
    printTextWithEndl("2. Cappuccino 2.20 BYN");
    printTextWithEndl("3. Latte 2.80 BYN");
    printTextWithEndl("4. Service");
    
    
    
    
    buyersBalance = 0;
    
    return 0;
}

void printText(string massage)
{
    cout << massage;
}
void printTextWithEndl(string massage)
{
    cout << massage << endl;
}
void printResult(string massage, double parametr)
{
    cout << massage << parametr << endl;
}
double money(double a)
{
    return a;
}
