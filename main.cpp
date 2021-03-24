//На Главном меню отображается текущий баланс Покупателя и следующие кнопки выбора:
//«1 – Deposit money»,
//«2 – Espresso <цена>»,
//«3 – Cappuccino <цена>»,
//«4 – Latte <цена>», предназначенные для Покупателя, и кнопка
//«5 – Service» – для Представителя сервиса.
//И (или) в случае отсутствия стаканчиков в автомате отображается фраза «We are very sorry but there are no cups left» и кнопка «5 – Service» – для Представителя сервиса.
////////////////////////////////////////////////////


//Если в автомате закончились стаканчики для кофе, то после нажатия на странице Главного меню на кнопки «1 – Deposit money», «2 – Espresso <цена>», «3 – Cappuccino <цена>», «4 – Latte <цена>» автомат генерирует сообщение: «We are very sorry but there are no cups left» и возвращается в Главное меню (см. R1.1). Или в случае отсутствия стаканчиков в Главном меню будут отсутствовать кнопки выбора для Покупателя (см. R1.1)
//
//Если в автомате есть хотя бы один стаканчик, то после нажатия на странице Главного меню на кнопку «1 – Deposit money» автомат показывает сообщение «Please deposit coins. Pay attention that the coffee machine doesn’t give change» и кнопки выбора: «1 – 10 coins», «2 – 20 coins», «3 – 50 coins», «4 – 1 BYN», «5 – 2 BYN».

//Покупатель выбирает вносимую сумму, автомат принимает деньги и возвращается в Главное меню с обновленной информацией на балансе.

//Автомат сдачу не выдает.
//
//Если в автомате есть хотя бы один стаканчик, то после нажатия на странице Главного меню на кнопки «2 – Espresso <цена>», или «3 – Cappuccino <цена>», или «4 – Latte <цена>» автомат проверяет, достаточно ли денег на балансе Покупателя.
//
//Если денег недостаточно, то автомат генерирует сообщение: «Please deposit money. Pay attention that the coffee machine doesn’t give change» и кнопки выбора: «1 – 10 coins», «2 – 20 coins», «3 – 50 coins», «4 – 1 BYN», «5 – 2 BYN».
//
//Если денег достаточно, то автомат делает выбранный вид кофе и подает его Покупателю. При этом на экране виден баланс Покупателя и фраза «Here is the best Espresso/Cappuccino/Latte in the City. Please, help yourself! »
//
//После того, как Покупатель забирает свой стаканчик кофе автомат возвращается в Главное меню (см. R 1.1).
//(см. R 2.3, R 2.4, R 2.5)



#include <iostream>
//HEAD MENU//////////////////////
# define EXPRESSO 1.50
# define CAPPUCCINO 2.20
# define LATTE 2.80
//BUYERS MENU////////////////////
# define CUPS 500
using namespace std;

int cups = CUPS;
int depositMoney;
int choice;

void printText(string massage);
void printResult(string massage, double parametr);
double printParametr(double parametr);
void cupsCounter();
void printMenu();
void enterMoney();
int checkCups();
int checkMoney();


int main()
{
    while(true)
    {
        depositMoney = 0;
        if (checkCups() == false)
        {break;}
        cupsCounter();
        printResult(" 1. Deposit money: ", printParametr (depositMoney));
        printMenu();
        printText("\n");
        enterMoney();
        cin >> depositMoney;
        printText("\n");
        printResult(" 1. Deposit money: ", printParametr (depositMoney));
        printMenu();
        checkMoney();
    }
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
double printParametr(double parametr)
{
    return parametr;
}
void cupsCounter()
{
    cups--;
}
void printMenu()
{
   // printResult(" 1. Deposit money: ", printParametr (depositMoney));
    printResult(" 2. Espresso (BYN) ",printParametr(EXPRESSO));
    printResult(" 3. Cappuccino (BYN) ", printParametr(CAPPUCCINO));
    printResult(" 4. Latte (BYN) ", printParametr(LATTE));
    printText(" 5. Service \n ");
    printText("Please make a selection: ");
    cin >> choice;
}
void enterMoney()
{
    printText(" Please deposit money. Pay attention that the coffee machine doesn’t give change\n");
    printText(" 1. 10 coins\n");
    printText(" 2. 20 coins\n");
    printText(" 3. 50 coins\n");
    printText(" 4. 1 BYN\n");
    printText(" 5. 2 BYN\n");
    printText(" Please, put in the money: ");
//    cin >> depositMoney;
}
int checkCups()
{
    if(cups > 0)
    {
        return true;
    }
    printText("We are very sorry but there are no cups left \n");
    return false;
}
int checkMoney()
{
    if ((choice == 2 and depositMoney >= EXPRESSO) or (choice == 3 and depositMoney >= CAPPUCCINO) or (choice == 4 and depositMoney >= LATTE))
    {
        printText("--//--//--//--MAKING COFFEE FOR YOU--//--//--//--\n ");
        printText("Here is the best coffee in the City. Please, help yourself!\n ");
        printText("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-\n\n\n\n ");
    }
    return true;
}












