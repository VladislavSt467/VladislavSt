#include "Header.h"

void vvodIzapis(Product_description Папка, Product_description Бумага, Product_description Калькулятор)
{
    FILE* f;

    fopen_s(&f, "file.txt", "w");

    if (f == NULL) 
    {
        puts("Ошибка открытия файла на запись");
        exit(0);
    }
    fseek(f, 0, SEEK_SET);


    cout << "\t\tВведите информацию для записи в файл:\n\n";

  
    cout << "Введите следующие значения с клавиатуры: " << endl;
    
    cout << "\tНаименование товара: ";
    cin >> Папка.Name;
    cout << endl;

    cout << "\tТип товара: ";
    cin >> Папка.type;
    cout << endl;

    cout << "\tЦена за 1 шт (грн): ";
    cin >> Папка.price;
    cout << endl;

    cout << "\tМинимальное количество в партии: ";
    cin >> Папка.min;
    cout << endl;

    
   


    cout << "Введите следующие значения с клавиатуры: " << endl;

    cout << "\tНаименование товара: ";
    cin >> Бумага.Name;
    cout << endl;

    cout << "\tТип товара: ";
    cin >> Бумага.type;
    cout << endl;

    cout << "\tЦена за 1 шт (грн): ";
    cin >> Бумага.price;
    cout << endl;

    cout << "\tМинимальное количество в партии: ";
    cin >> Бумага.min;
    cout << endl << endl << endl;


    cout << "Введите следующие значения с клавиатуры: " << endl;

    cout << "\tНаименование товара: ";
    cin >> Калькулятор.Name;
    cout << endl;

    cout << "\tТип товара: ";
    cin >> Калькулятор.type;
    cout << endl;

    cout << "\tЦена за 1 шт (грн): ";
    cin >> Калькулятор.price;
    cout << endl;

    cout << "\tМинимальное количество в партии: ";
    cin >> Калькулятор.min;
    cout << endl << endl << endl;

    fwrite(&Папка, sizeof(Product_description), 1, f);
    fwrite(&Бумага, sizeof(Product_description), 1, f);
    fwrite(&Калькулятор, sizeof(Product_description), 1, f);


    fclose(f);
}



void vnachalo()
{
    FILE* f;
    fopen_s(&f, "file.txt", "r+t");
    if (f == 0)
    {
        puts("Ошибка открытия файла1.");
        exit(0);
    }

    FILE* ft;
    fopen_s(&ft, "tempfile1.txt", "w+t");
    if (ft == 0)
    {
        puts("Ошибка открытия файла2.");
        exit(0);
    }

    Product_description nazapis{};

    cout << "Введите данные для структуры, которую хотите записать в начало файла:\n";

    cout << "\tНаименование товара: ";
    cin >> nazapis.Name;
    cout << endl;

    cout << "\tТип товара: ";
    cin >> nazapis.type;
    cout << endl;

    cout << "\tЦена за 1 шт (грн): ";
    cin >> nazapis.price;
    cout << endl;

    cout << "\tМинимальное количество в партии: ";
    cin >> nazapis.min;
    fwrite(&nazapis, sizeof(Product_description), 1, ft);








    while (true)
    {
        Product_description temp{};
        fread(&temp, sizeof(Product_description), 1, f);
        if (feof(f))
        {
            break;
        }
        fwrite(&temp, sizeof(Product_description), 1, ft);
    }
  
    fclose(f);
    fclose(ft);

    remove("file.txt");

    int d = rename("tempfile1.txt", "file.txt");
    if (d == 1)
    {
        cout << "\nОшибка переименования файла\n";
        exit(0);
    }
}


void randomly(Product_description Папка, Product_description Бумага, Product_description Калькулятор)
{

    FILE* f;

    fopen_s(&f, "file.txt", "w");

    if (f == NULL)
    {			
        puts("Ошибка открытия файла.");
        exit(0);
    }

    char Array[][12] = 
    {
        {"Папка"},
        {"Бумага"},
        {"Калькулятор"} 
    };
    char Array2[][2] =
    {   {"К"},
        {"К"},
        {"О"} 
    };

   

    for (int i = 0; i < 4; i++)
    {
        Папка.Name[i] = Array[0][i];
    }
    cout << endl << "Наименование товара: " << Папка.Name << endl;

    for (int i = 0; i < 2; i++)
    {
        Папка.type[i] = Array2[0][i];
    }
    cout << "Тип товара: " << Папка.type << endl;

    Папка.price = rand() % 101 + 150;
    cout << "Цена за 1 шт (грн): " << Папка.price << endl;

    Папка.min = rand() % 25 + 25;
    cout << "Минимальное количество в партии: " << Папка.min << endl;

    fwrite(&Папка, sizeof(Product_description), 1, f);
    
    for (int i = 0; i < 10; i++)
    {
        Бумага.Name[i] = Array[1][i];
    }
    cout << endl << "Наименование товара: " << Бумага.Name << endl;

    for (int i = 0; i < 2; i++)
    {
        Бумага.type[i] = Array2[1][i];
    }
    cout << "Тип товара: " << Бумага.type << endl;

    Бумага.price = rand() % 101 + 150;
    cout << "Цена за 1 шт (грн): " << Бумага.price << endl;

    Бумага.min = rand() % 25 + 25;
    cout << "Минимальное количество в партии: " << Бумага.min << endl;

    fwrite(&Бумага, sizeof(Product_description), 1, f);
   

    for (int i = 0; i < 8; i++)
    {
        Калькулятор.Name[i] = Array[2][i];
    }
    cout << endl << "Наименование товара: " << Калькулятор.Name << endl;

    for (int i = 0; i < 2; i++)
    {
        Калькулятор.type[i] = Array2[2][i];
    }
    cout << "Тип товара: " << Калькулятор.type << endl;

    Калькулятор.price = rand() % 101 + 150;
    cout << "Цена за 1 шт (грн): " << Калькулятор.price << endl;

    Калькулятор.min = rand() % 25 + 25;
    cout << "Минимальное количество в партии: " << Калькулятор.min << endl;

    fwrite(&Калькулятор, sizeof(Product_description), 1, f);
 

    fclose(f);

}


void vkonec(Product_description Папка, Product_description Бумага, Product_description Калькулятор)
{
    char Array[][12] = 
    {
       {"Папка"},
       {"Бумага"},
       {"Калькулятор"} 
    };
    char Array2[][2] =
    {   {"К"},
        {"К"},
        {"О"}
    };


    FILE* f;

    fopen_s(&f, "file.txt", "a+b");

    if (f == NULL)
    {
        puts("Ошибка открытия файла.");
        exit(0);
    }
    fseek(f, 0, SEEK_SET);


    Product_description nazapis{};

    cout << "Введите данные для структуры, которую хотите записать в конец файла:\n";

    cout << "\tНаименование товара: ";
    cin >> nazapis.Name;
    cout << endl;

    cout << "\tТип товара: ";
    cin >> nazapis.type;
    cout << endl;

    cout << "\tЦена за 1 шт (грн): ";
    cin >> nazapis.price;
    cout << endl;

    cout << "\tМинимальное количество в партии: ";
    cin >> nazapis.min;
    fwrite(&nazapis, sizeof(Product_description), 1, f);


    fclose(f);
}


void ponomery(int temp)
{
    FILE* f;


    fopen_s(&f, "file.txt", "r");

    if (f == NULL)
    {
        puts("Ошибка открытия файла.");
        exit(0);
    }

    fseek(f, (temp) * sizeof(Product_description), SEEK_SET);

    Product_description tempor{};

    fread(&tempor, sizeof(Product_description), 1, f);

    cout << "Запись по номеру: \n";

    cout << tempor.Name << "\t" << tempor.type << "\t" << tempor.price << "\t" << tempor.min << endl;



    fclose(f);
}

void vse()
{
    FILE* f;

    fopen_s(&f, "file.txt", "r");
    if (f == NULL)
    {
        puts("Ошибка открытия файла.");
        exit(0);
    }
    //fseek(f, 0, SEEK_SET);
    while (true)
    {

        Product_description tempor{};

        fread(&tempor, sizeof(Product_description), 1, f);
        if (feof(f))
        {
            break;
        }
        cout << "\t" << tempor.Name;
        cout << "\t" << tempor.type;
        cout << "\t" << tempor.price;
        cout << "\t" << tempor.min << endl;
    }
    fclose(f);
}