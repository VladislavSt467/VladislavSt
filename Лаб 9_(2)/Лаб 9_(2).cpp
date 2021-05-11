

#include <iostream>
#include "Header1.h"







int main()
{
    setlocale(LC_ALL, "ru");

    menu();




    int choice;

    while (true)
    {
        choice = 0;

        while (true)
        {
            choice = 0;
            cout << "\n--->";

            cin >> choice;
            if ((choice < 1) || (choice > 12))
            {
                cout << "\nНеверный ввод, попробуйте еще раз.\n";
            }
            else if ((choice >= 1) && (choice <= 12)) break;

        }




        if (choice == 1)
        {
            Opers temporary{};
            cout << "\n\tВведите данные для добавления в список:\n";

            cout << "\nИмя: ";
            for (int i = 0; i < strsize; i++)
            {
                cin.get(temporary.Name[i]);
                if ((temporary.Name[i] == '\n') && (i == 0))
                {
                    temporary.Name[i] = 0;
                    i--;
                    continue;
                }
                else if ((temporary.Name[i] == '\n') && (i != 0))
                {
                    temporary.Name[i] = '\0';
                    break;
                }
            }

            cout << "\nСУБД: ";
            for (int i = 0; i < strsize; i++)
            {
                cin.get(temporary.SUBD[i]);
                if ((temporary.SUBD[i] == '\n') && (i == 0))
                {
                    temporary.SUBD[i] = 0;
                    i--;
                    continue;
                }
                else if ((temporary.SUBD[i] == '\n') && (i != 0))
                {
                    temporary.SUBD[i] = '\0';
                    break;
                }
            }

            cout << "\nОбъем внешней памяти: ";
            cin >> temporary.outmem;

            cout << "\nОбъем оперативной памяти: ";
            cin >> temporary.minRam;

            cout << "\nЦена: ";
            cin >> temporary.cost;
            Create(temporary);
        }
        else if (choice == 2)
        {
            printfromstart();
        }
        else if (choice == 3)
        {
            printfromend();
        }
        else if (choice == 4)
        {
            int option = 0;
            cout << "\n\tВыберите, по какому критерию следует отсортировать список с начала:\n";
            cout << "1 - Имя\n";
            cout << "2 - СУБД\n";
            cout << "3 - Объем внешней памяти\n";
            cout << "4 - Объем оперативной памяти\n";
            cout << "5 - Цена\n";


            while (true)
            {
                cout << "---> ";
                cin >> option;
                if (option < 1 || option > 5)
                {
                    cout << "\nНеверная опция, попробуйте еще раз\n";
                    continue;
                }
                else break;
            }
            criteriafromstart(option);
        }
        else if (choice == 5)
        {
            int option = 0;
            cout << "\n\tВыберите, по какому критерию следует отсортировать список c с конца:\n";
            cout << "1 - Имя\n";
            cout << "2 - СУБД\n";
            cout << "3 - Объем внешней памяти\n";
            cout << "4 - Объем оперативной памяти\n";
            cout << "5 - Цена\n";


            while (true)
            {
                cout << "---> ";
                cin >> option;
                if ((option < 1) || (option > 5))
                {
                    cout << "\nНеверная опция, попробуйте еще раз\n";
                    continue;
                }
                else break;
            }
            criteriafromend(option);
        }
        else if (choice == 6)
        {
            cout << "\nВведите место, в которое надо добавить элемент: ";
            int pos;
            int check = listsize();
            while (true)
            {
                cin >> pos;
                if (pos > check)
                {
                    cout << "\nВ списке нет такой позиции, попробуйте еще раз.\n";
                    continue;
                }
                else if (pos < 0)
                {
                    cout << "\nВ списке нет такой позиции, попробуйте еще раз.\n";
                    continue;
                }
                else break;

            }


            Opers temporary1{};
            cout << "\n\tВведите данные для добавления в список:\n";
            /*Заполнение структуры*/
            cout << "\nИмя: ";
            for (int i = 0; i < strsize; i++)
            {
                cin.get(temporary1.Name[i]);
                if ((temporary1.Name[i] == '\n') && (i == 0))
                {
                    temporary1.Name[i] = 0;
                    i--;
                    continue;
                }
                else if ((temporary1.Name[i] == '\n') && (i != 0))
                {
                    temporary1.Name[i] = '\0';
                    break;
                }
            }

            cout << "\nСУБД: ";
            for (int i = 0; i < strsize; i++)
            {
                cin.get(temporary1.SUBD[i]);
                if ((temporary1.SUBD[i] == '\n') && (i == 0))
                {
                    temporary1.SUBD[i] = 0;
                    i--;
                    continue;
                }
                else if ((temporary1.SUBD[i] == '\n') && (i != 0))
                {
                    temporary1.SUBD[i] = '\0';
                    break;
                }
            }

            cout << "\nОбъем внешней памяти: ";
            cin >> temporary1.outmem;

            cout << "\nОбъем оперативной памяти: ";
            cin >> temporary1.minRam;

            cout << "\nЦена: ";
            cin >> temporary1.cost;
            /*----------------*/
            Add(pos, temporary1);
        }
        else if (choice == 7)
        {
            cout << "\nВведите номер элемента, который следует удалить: ";
            int pos1;
            cin >> pos1;
            while (true)
            {
                if (pos1 > listsize())
                {
                    cout << "\nВ списке нет такой позиции, попробуйте еще раз\n";
                    continue;
                }
                else break;

            }
            Delete(pos1);
        }
        else if (choice == 8)
        {
            cout << "\nПо какому полю вы хотите отсортировать структуру?\n";

            cout << "\n1 - Объем внешней памяти\n";
            cout << "2 - Объем оперативной памяти\n";
            cout << "3 - Цена\n";
            cout << "4 - Имя\n";
            cout << "5 - СУБД\n";

            int choice3 = 0;
            while (true)
            {
                cout << "---> ";
                cin >> choice3;
                if (choice3 < 1 || choice3 > 5)
                {
                    cout << "\nНеверный ввод, попробуйте еще раз";
                    continue;
                }
                else break;
            }
            Sorting(choice3);

        }
        else if (choice == 9)
        {
            infile();
        }
        else if (choice == 10)
        {
            Read();
        }
        else if (choice == 11) menu();
        else if (choice == 12) exit(0);








