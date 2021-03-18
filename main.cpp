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
void printResult(string massage, double parametr);
double value(double a);


int main() {
    
    //MENU//////////////////////////
    int depositMoney = 0;
    
    printText("Plese, put in the money: ");
    cin >> depositMoney;
    printResult(" 1.Deposit money: ", value (depositMoney));
    printText("Please make a selection:\n");
    printResult(" 2. Espresso (BYN) ",value(EXPRESSO));
    printResult(" 3. Cappuccino (BYN) ", value(CAPPUCCINO));
    printResult(" 4. Latte (BYN) ", value(LATTE));
    printText(" 5. Service \n \n ");
    
    
    
    
    depositMoney = 0;
    
    return 0;
}

void printText(string massage)
{
    cout << massage;
}
void printResult(string massage, double parametr)
{
    cout << massage << parametr << endl;
}
double value(double a)
{
    return a;
}
