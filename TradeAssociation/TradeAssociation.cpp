#include <iostream>
#include <clocale>
#include "Product.h"

void menu() 
{
    std::cout << "Список команд для управления торговой организации:\n";
    std::cout << "1. Поставка товара от поставщика на склад\n";
    std::cout << "2. Доставка товар со склада в магазин\n";
    std::cout << "3. Покупка товара оптовым клиентом\n";
    std::cout << "4. Покупка товара розничным клиентом\n";
    std::cout << "5. Просмотр текущего состояния склада\n";
    std::cout << "6. Просмотр текущего состояния магазина\n";
    std::cout << "7. Следующий день\n";
    std::cout << "8. Лишь утратив всё до конца мы обретаем свободу\n";
    std::cout << "Введите номер команды: ";
}

void executeCommand(int commandNumber) 
{
    switch (commandNumber)
    {
    case 1: 
    {
        std::string name;
        std::cout << "Введите название продукта: ";
        std::cin >> name;

        std::string type;
        std::cout << "Введите тип продукта: ";
        std::cin >> type;

        double volume;
        std::cout << "Введите объём продукта в литрах: ";
        std::cin >> volume;

        Product* product = new Product(name, type, volume);
    }
    default:
        break;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int comandNumber;

    std::cout << "Добро пожаловать в торговую организацию \"Лимонадик и пивас\"\n";

    int numberProductTypes;
    std::cout << "Укажите сколько типов товара будет в этой организации: ";
    std::cin >> numberProductTypes;

    std::string* productTypes = new std::string[numberProductTypes];
    std::string** productNames = new std::string*[numberProductTypes];

    for (int i = 0; i < numberProductTypes; i++)
    {
        std::cout << "Укажите название " << i << "-ого типа ";
        std::cin >> productTypes[i];

        int numberProductNames;
        std::cout << "Укажите сколько названий товаров содержит этот тип: ";
        std::cin >> numberProductNames;

        for (int j = 0; j < numberProductNames; j++)
        {
            std::cout << "Укажите " << j << "-ое название ";
            std::cin >> productNames[i][j];
        }
    }
    
    menu();

    std::cin >> comandNumber;

    while (comandNumber != 8) 
    {
        executeCommand(comandNumber);
        menu();

        std::cin >> comandNumber;
    }
}