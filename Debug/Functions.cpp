#include "Header.h"

void vvodIzapis(OperSistem OS2, OperSistem WindowsNT, OperSistem SCOUnix)
{
    FILE* f;

    fopen_s(&f, "file.txt", "w");

    if (f == NULL) {
        puts("������ �������� ����� �� ������");
        exit(0);
    }
    fseek(f, 0, SEEK_SET);


    cout << "\t\t������� ���������� ��� ������ � ����:\n\n";


    cout << "������� ��������� �������� � ����������: " << endl;

    cout << "\t��� ��: ";
    cin >> OS2.Name;
    cout << endl;

    cout << "\t����: ";
    cin >> OS2.SUBD;
    cout << endl;

    cout << "\t���.����� ������� ������ (MB): ";
    cin >> OS2.outmem;
    cout << endl;

    cout << "\t���.����� ����������� ������ (MB): ";
    cin >> OS2.minRam;
    cout << endl;

    cout << "\t��������������� ���� ($): ";
    cin >> OS2.cost;
    cout << endl << endl << endl;



    cout << "������� ��������� �������� � ����������: " << endl;

    cout << "\t��� ��: ";
    cin >> WindowsNT.Name;
    cout << endl;

    cout << "\t����: ";
    cin >> WindowsNT.SUBD;
    cout << endl;

    cout << "\t���.����� ������� ������ (MB): ";
    cin >> WindowsNT.outmem;
    cout << endl;

    cout << "\t���.����� ����������� ������ (MB): ";
    cin >> WindowsNT.minRam;
    cout << endl;

    cout << "\t��������������� ���� ($): ";
    cin >> WindowsNT.cost;
    cout << endl << endl << endl;


    cout << "������� ��������� �������� � ����������: " << endl;

    cout << "\t��� ��: ";
    cin >> SCOUnix.Name;
    cout << endl;

    cout << "\t����: ";
    cin >> SCOUnix.SUBD;
    cout << endl;

    cout << "\t���.����� ������� ������ (MB): ";
    cin >> SCOUnix.outmem;
    cout << endl;

    cout << "\t���.����� ����������� ������ (MB): ";
    cin >> SCOUnix.minRam;
    cout << endl;

    cout << "\t��������������� ���� ($): ";
    cin >> SCOUnix.cost;
    cout << endl << endl << endl;

    fwrite(&OS2, sizeof(OperSistem), 1, f);
    fwrite(&WindowsNT, sizeof(OperSistem), 1, f);
    fwrite(&SCOUnix, sizeof(OperSistem), 1, f);


    fclose(f);
}



void vnachalo()
{
    FILE* f;
    fopen_s(&f, "file.txt", "r+t");
    if (f == 0)
    {
        puts("������ �������� �����1.");
        exit(0);
    }

    FILE* ft;
    fopen_s(&ft, "tempfile1.txt", "w+t");
    if (ft == 0)
    {
        puts("������ �������� �����2.");
        exit(0);
    }

    OperSistem nazapis{};

    cout << "������� ������ ��� ���������, ������� ������ �������� � ������ �����:\n";

    cout << "\t��� ��: ";
    cin >> nazapis.Name;
    cout << endl;

    cout << "\t����: ";
    cin >> nazapis.SUBD;
    cout << endl;

    cout << "\t���.����� ������� ������ (MB): ";
    cin >> nazapis.outmem;
    cout << endl;

    cout << "\t���.����� ����������� ������ (MB): ";
    cin >> nazapis.minRam;
    cout << endl;

    cout << "\t��������������� ���� ($): ";
    cin >> nazapis.cost;
    fwrite(&nazapis, sizeof(OperSistem), 1, ft);








    while (true)
    {
        OperSistem temp{};
        fread(&temp, sizeof(OperSistem), 1, f);
        if (feof(f))
        {
            break;
        }
        fwrite(&temp, sizeof(OperSistem), 1, ft);
    }

    fclose(f);
    fclose(ft);

    remove("file.txt");

    int d = rename("tempfile1.txt", "file.txt");
    if (d == 1)
    {
        cout << "\n������ �������������� �����\n";
        exit(0);
    }
}


void randomly(OperSistem OS2, OperSistem WindowsNT, OperSistem SCOUnix)
{

    FILE* f;

    fopen_s(&f, "file.txt", "w");

    if (f == NULL)
    {			//!f
        puts("������ �������� �����.");
        exit(0);
    }

    char Array[][11] = {
        {"OS/2"},
        {"Windows/NT"},
        {"SCO/Unix"} };
    char Array2[][10] =
    { {"DB2"},
        {"SQLServer"},
        {"Oracle"} };



    for (int i = 0; i < 4; i++)
    {
        OS2.Name[i] = Array[0][i];
    }
    cout << endl << "��� ��: " << OS2.Name << endl;

    for (int i = 0; i < 3; i++)
    {
        OS2.SUBD[i] = Array2[0][i];
    }
    cout << "����: " << OS2.SUBD << endl;

    OS2.outmem = rand() % 101 + 150;
    cout << "���.����� ������� ������ (MB): " << OS2.outmem << endl;

    OS2.minRam = rand() % 25 + 25;
    cout << "���.����� ����������� ������ (MB): " << OS2.minRam << endl;

    OS2.cost = rand() % 2000 + 2000;
    cout << "��������������� ���� ($): " << OS2.cost << endl;

    fwrite(&OS2, sizeof(OperSistem), 1, f);

    for (int i = 0; i < 10; i++)
    {
        WindowsNT.Name[i] = Array[1][i];
    }
    cout << endl << "��� ��: " << WindowsNT.Name << endl;

    for (int i = 0; i < 9; i++)
    {
        WindowsNT.SUBD[i] = Array2[1][i];
    }
    cout << "����: " << WindowsNT.SUBD << endl;

    WindowsNT.outmem = rand() % 101 + 150;
    cout << "���.����� ������� ������ (MB): " << WindowsNT.outmem << endl;

    WindowsNT.minRam = rand() % 25 + 25;
    cout << "���.����� ����������� ������ (MB): " << WindowsNT.minRam << endl;

    WindowsNT.cost = rand() % 2000 + 2000;
    cout << "��������������� ���� ($): " << WindowsNT.cost << endl;

    fwrite(&WindowsNT, sizeof(OperSistem), 1, f);


    for (int i = 0; i < 8; i++)
    {
        SCOUnix.Name[i] = Array[2][i];
    }
    cout << endl << "��� ��: " << OS2.Name << endl;

    for (int i = 0; i < 6; i++)
    {
        SCOUnix.SUBD[i] = Array2[2][i];
    }
    cout << "����: " << SCOUnix.SUBD << endl;

    SCOUnix.outmem = rand() % 101 + 150;
    cout << "���.����� ������� ������ (MB): " << SCOUnix.outmem << endl;

    SCOUnix.minRam = rand() % 25 + 25;
    cout << "���.����� ����������� ������ (MB): " << SCOUnix.minRam << endl;

    SCOUnix.cost = rand() % 2000 + 2000;
    cout << "��������������� ���� ($): " << SCOUnix.cost << endl;

    fwrite(&SCOUnix, sizeof(OperSistem), 1, f);
    /*----------------------------------------*/


    fclose(f);

}


void vkonec(OperSistem OS2, OperSistem WindowsNT, OperSistem SCOUnix)
{
    char Array[][11] = {
       {"OS/2"},
       {"Windows/NT"},
       {"SCO/Unix"} };
    char Array2[][10] =
    { "DB2",
        "SQLServer",
        "Oracle" };


    FILE* f;

    fopen_s(&f, "file.txt", "a+b");

    if (f == NULL)
    {
        puts("������ �������� �����.");
        exit(0);
    }
    fseek(f, 0, SEEK_SET);


    OperSistem nazapis{};

    cout << "������� ������ ��� ���������, ������� ������ �������� � ����� �����:\n";

    cout << "\t��� ��: ";
    cin >> nazapis.Name;
    cout << endl;

    cout << "\t����: ";
    cin >> nazapis.SUBD;
    cout << endl;

    cout << "\t���.����� ������� ������ (MB): ";
    cin >> nazapis.outmem;
    cout << endl;

    cout << "\t���.����� ����������� ������ (MB): ";
    cin >> nazapis.minRam;
    cout << endl;

    cout << "\t��������������� ���� ($): ";
    cin >> nazapis.cost;
    fwrite(&nazapis, sizeof(OperSistem), 1, f);


    fclose(f);
}


void ponomery(int temp)
{
    FILE* f;


    fopen_s(&f, "file.txt", "r");

    if (f == NULL)
    {
        puts("������ �������� �����.");
        exit(0);
    }

    fseek(f, (temp) * sizeof(OperSistem), SEEK_SET);

    OperSistem tempor{};

    fread(&tempor, sizeof(OperSistem), 1, f);

    cout << "������ �� ������: \n";

    cout << tempor.Name << "\t" << tempor.SUBD << "\t" << tempor.outmem << "\t" << tempor.minRam << "\t" << tempor.cost << endl;



    fclose(f);
}

void vse()
{
    FILE* f;

    fopen_s(&f, "file.txt", "r");
    if (f == NULL)
    {
        puts("������ �������� �����.");
        exit(0);
    }
    //fseek(f, 0, SEEK_SET);
    while (true)
    {

        OperSistem tempor{};

        fread(&tempor, sizeof(OperSistem), 1, f);
        if (feof(f))
        {
            break;
        }
        cout << tempor.Name;
        cout << "\t" << tempor.SUBD;
        cout << "\t" << tempor.outmem;
        cout << "\t" << tempor.minRam;
        cout << "\t" << tempor.cost << endl;
    }
    fclose(f);
}