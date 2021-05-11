#include "Header1.h"

Opers* head = NULL;
Opers* tail = NULL;



void Create(Opers newdata)
{
    Opers* temp = new Opers;



    if (head == NULL)
    {
        temp->prev = NULL;
        head = temp;
        tail = head;
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    /*-------------*/
    for (int i = 0; i < strsize; i++)
    {
        temp->Name[i] = newdata.Name[i];
        if (newdata.Name[i] == '\0') break;
    }
    for (int i = 0; i < strsize; i++)
    {
        temp->SUBD[i] = newdata.SUBD[i];
        if (newdata.SUBD[i] == '\0') break;
    }
    temp->outmem = newdata.outmem;
    temp->minRam = newdata.minRam;
    temp->cost = newdata.cost;
    temp->next = NULL;
    /*---------------*/
}

void printfromstart()
{
    Opers* temp;
    temp = head;
    if (temp == NULL)
    {
        cout << "\nÑïèñîê ïóñòîé.\n";
        return;
    }
    while (true)
    {
        if (temp == NULL) break;

        for (int i = 0; i < strsize; i++)
        {
            if (temp->Name[i] == '\0') break;
            cout << temp->Name[i];
        }
        cout << endl;
        for (int i = 0; i < strsize; i++)
        {
            if (temp->SUBD[i] == '\0') break;
            cout << temp->SUBD[i];
        }
        cout << endl;
        cout << temp->outmem << endl;
        cout << temp->minRam << endl;
        cout << temp->cost << endl;

        temp = temp->next;
        cout << endl << endl;
    }


}

void printfromend()
{
    Opers* temp = tail;
    if (temp == NULL)
    {
        cout << "\nÑïèñîê ïóñòîé.\n";
        return;
    }
    while (true)
    {
        if (temp == NULL) break;
        for (int i = 0; i < strsize; i++)
        {
            if (temp->Name[i] == '\0') break;
            cout << temp->Name[i];
        }
        cout << endl;
        for (int i = 0; i < strsize; i++)
        {
            if (temp->SUBD[i] == '\0') break;
            cout << temp->SUBD[i];
        }
        cout << endl;
        cout << temp->outmem << endl;
        cout << temp->minRam << endl;
        cout << temp->cost << endl;
        temp = temp->prev;
        cout << endl << endl;
    }

}

void criteriafromend(int choice)
{


    if (choice == 1)
    {
        Opers* temp1 = tail;

        int c;

        char tempcriteria[strsize]{};

        cout << "\nÂâåäèòå èìÿ: ";


        for (int i = 0; i < strsize; i++)
        {

            cin.get(tempcriteria[i]);
            if ((tempcriteria[i] == '\n') && (i == 0))
            {
                tempcriteria[i] = 0;
                i--;
                continue;
            }
            else if ((tempcriteria[i] == '\n') && (i != 0))
            {
                tempcriteria[i] = '\0';
                break;
            }

        }

        while (true)
        {



            if (temp1 == NULL) break;

            c = 0;

            for (int i = 0; i < strsize; i++)
            {
                if (tempcriteria[i] == '\0')
                {

                    break;
                }
                else if (tempcriteria[i] == temp1->Name[i]) c++;

                else break;
            }

            if ((strlen(tempcriteria) == c))
            {
                cout << "\nÈñêîìûå äàííûå:\n";

                for (int i = 0; i < strsize; i++)
                {
                    if (temp1->Name[i] == '\0') break;
                    cout << temp1->Name[i];
                }
                cout << endl;
                for (int i = 0; i < strsize; i++)
                {
                    if (temp1->SUBD[i] == '\0') break;
                    cout << temp1->SUBD[i];
                }
                cout << endl;
                cout << temp1->outmem << endl;
                cout << temp1->minRam << endl;
                cout << temp1->cost << endl;

                cout << endl << endl;
            }

            temp1 = temp1->prev;
        }


        temp1 = nullptr;
    }
    else if (choice == 2)
    {
        Opers* temp2 = tail;

        int c;

        char tempcriteria[strsize]{};

        cout << "\nÂâåäèòå ÑÓÁÄ: ";


        for (int i = 0; i < strsize; i++)
        {

            cin.get(tempcriteria[i]);
            if ((tempcriteria[i] == '\n') && (i == 0))
            {
                tempcriteria[i] = 0;
                i--;
                continue;
            }
            else if ((tempcriteria[i] == '\n') && (i != 0))
            {
                tempcriteria[i] = '\0';
                break;
            }

        }

        while (true)
        {



            if (temp2 == NULL) break;

            c = 0;

            for (int i = 0; i < strsize; i++)
            {
                if (tempcriteria[i] == '\0')
                {

                    break;
                }
                else if (tempcriteria[i] == temp2->SUBD[i]) c++;

                else break;
            }

            if ((strlen(tempcriteria) == c))
            {
                cout << "\nÈñêîìûå äàííûå:\n";

                for (int i = 0; i < strsize; i++)
                {
                    if (temp2->Name[i] == '\0') break;
                    cout << temp2->Name[i];
                }
                cout << endl;
                for (int i = 0; i < strsize; i++)
                {
                    if (temp2->SUBD[i] == '\0') break;
                    cout << temp2->SUBD[i];
                }
                cout << endl;
                cout << temp2->outmem << endl;
                cout << temp2->minRam << endl;
                cout << temp2->cost << endl;

                cout << endl << endl;
            }

            temp2 = temp2->prev;
        }

        temp2 = nullptr;
    }
    else if (choice == 3)
    {
        int temp = 0;
        cout << "\nÂâåäèòå îáúåì âíåøíåé ïàìÿòè: ";
        cin >> temp;
        Opers* temps = tail;
        while (true)
        {
            if (temps == NULL) break;

            if (temp == temps->outmem)
            {
                cout << "\nÈñêîìûå äàííûå:\n";

                for (int i = 0; i < strsize; i++)
                {
                    if (temps->Name[i] == '\0') break;
                    cout << temps->Name[i];
                }
                cout << endl;
                for (int i = 0; i < strsize; i++)
                {
                    if (temps->SUBD[i] == '\0') break;
                    cout << temps->SUBD[i];
                }
                cout << endl;
                cout << temps->outmem << endl;
                cout << temps->minRam << endl;
                cout << temps->cost << endl;

                cout << endl << endl;
            }
            temps = temps->prev;
        }
        temps = nullptr;
    }
    else if (choice == 4)
    {
        int temp = 0;
        cout << "\nÂâåäèòå îáúåì îïåðàòèâíîé ïàìÿòè: ";
        cin >> temp;
        Opers* temps2 = tail;
        while (true)
        {
            if (temps2 == NULL) break;

            if (temp == temps2->minRam)
            {
                cout << "\nÈñêîìûå äàííûå:\n";

                for (int i = 0; i < strsize; i++)
                {
                    if (temps2->Name[i] == '\0') break;
                    cout << temps2->Name[i];
                }
                cout << endl;
                for (int i = 0; i < strsize; i++)
                {
                    if (temps2->SUBD[i] == '\0') break;
                    cout << temps2->SUBD[i];
                }
                cout << endl;
                cout << temps2->outmem << endl;
                cout << temps2->minRam << endl;
                cout << temps2->cost << endl;

                cout << endl << endl;
            }
            temps2 = temps2->prev;
        }
        temps2 = nullptr;
    }
    else if (choice == 5)
    {
        int temp = 0;
        cout << "\nÂâåäèòå öåíó: ";
        cin >> temp;
        Opers* temps3 = tail;
        while (true)
        {
            if (temps3 == NULL) break;

            if (temp == temps3->cost)
            {
                cout << "\nÈñêîìûå äàííûå:\n";

                for (int i = 0; i < strsize; i++)
                {
                    if (temps3->Name[i] == '\0') break;
                    cout << temps3->Name[i];
                }
                cout << endl;
                for (int i = 0; i < strsize; i++)
                {
                    if (temps3->SUBD[i] == '\0') break;
                    cout << temps3->SUBD[i];
                }
                cout << endl;
                cout << temps3->outmem << endl;
                cout << temps3->minRam << endl;
                cout << temps3->cost << endl;

                cout << endl << endl;
            }
            temps3 = temps3->prev;
        }
        temps3 = nullptr;
    }


}

void criteriafromstart(int choice)
{
    if (choice == 1)
    {
        Opers* temp1 = head;

        int c;

        char tempcriteria[strsize]{};

        cout << "\nÂâåäèòå èìÿ: ";


        for (int i = 0; i < strsize; i++)
        {

            cin.get(tempcriteria[i]);
            if ((tempcriteria[i] == '\n') && (i == 0))
            {
                tempcriteria[i] = 0;
                i--;
                continue;
            }
            else if ((tempcriteria[i] == '\n') && (i != 0))
            {
                tempcriteria[i] = '\0';
                break;
            }

        }

        while (true)
        {



            if (temp1 == NULL) break;

            c = 0;

            for (int i = 0; i < strsize; i++)
            {
                if (tempcriteria[i] == '\0')
                {

                    break;
                }
                else if (tempcriteria[i] == temp1->Name[i]) c++;

                else break;
            }

            if ((strlen(tempcriteria) == c))
            {
                cout << "\nÈñêîìûå äàííûå:\n";

                for (int i = 0; i < strsize; i++)
                {
                    if (temp1->Name[i] == '\0') break;
                    cout << temp1->Name[i];
                }
                cout << endl;
                for (int i = 0; i < strsize; i++)
                {
                    if (temp1->SUBD[i] == '\0') break;
                    cout << temp1->SUBD[i];
                }
                cout << endl;
                cout << temp1->outmem << endl;
                cout << temp1->minRam << endl;
                cout << temp1->cost << endl;

                cout << endl << endl;
            }

            temp1 = temp1->next;
        }


        temp1 = nullptr;
    }
    else if (choice == 2)
    {
        Opers* temp2 = head;

        int c;

        char tempcriteria[strsize]{};

        cout << "\nÂâåäèòå ÑÓÁÄ: ";


        for (int i = 0; i < strsize; i++)
        {

            cin.get(tempcriteria[i]);
            if ((tempcriteria[i] == '\n') && (i == 0))
            {
                tempcriteria[i] = 0;
                i--;
                continue;
            }
            else if ((tempcriteria[i] == '\n') && (i != 0))
            {
                tempcriteria[i] = '\0';
                break;
            }

        }

        while (true)
        {



            if (temp2 == NULL) break;

            c = 0;

            for (int i = 0; i < strsize; i++)
            {
                if (tempcriteria[i] == '\0')
                {

                    break;
                }
                else if (tempcriteria[i] == temp2->SUBD[i]) c++;

                else break;
            }

            if ((strlen(tempcriteria) == c))
            {
                cout << "\nÈñêîìûå äàííûå:\n";

                for (int i = 0; i < strsize; i++)
                {
                    if (temp2->Name[i] == '\0') break;
                    cout << temp2->Name[i];
                }
                cout << endl;
                for (int i = 0; i < strsize; i++)
                {
                    if (temp2->SUBD[i] == '\0') break;
                    cout << temp2->SUBD[i];
                }
                cout << endl;
                cout << temp2->outmem << endl;
                cout << temp2->minRam << endl;
                cout << temp2->cost << endl;

                cout << endl << endl;
            }

            temp2 = temp2->next;
        }

        temp2 = nullptr;
    }
    else if (choice == 3)
    {
        int temp = 0;
        cout << "\nÂâåäèòå îáúåì âíåøíåé ïàìÿòè: ";
        cin >> temp;
        Opers* temps = head;
        while (true)
        {
            if (temps == NULL) break;

            if (temp == temps->outmem)
            {
                cout << "\nÈñêîìûå äàííûå:\n";

                for (int i = 0; i < strsize; i++)
                {
                    if (temps->Name[i] == '\0') break;
                    cout << temps->Name[i];
                }
                cout << endl;
                for (int i = 0; i < strsize; i++)
                {
                    if (temps->SUBD[i] == '\0') break;
                    cout << temps->SUBD[i];
                }
                cout << endl;
                cout << temps->outmem << endl;
                cout << temps->minRam << endl;
                cout << temps->cost << endl;

                cout << endl << endl;
            }
            temps = temps->next;
        }
        temps = nullptr;
    }
    else if (choice == 4)
    {
        int temp = 0;
        cout << "\nÂâåäèòå îáúåì îïåðàòèâíîé ïàìÿòè: ";
        cin >> temp;
        Opers* temps2 = head;
        while (true)
        {
            if (temps2 == NULL) break;

            if (temp == temps2->minRam)
            {
                cout << "\nÈñêîìûå äàííûå:\n";

                for (int i = 0; i < strsize; i++)
                {
                    if (temps2->Name[i] == '\0') break;
                    cout << temps2->Name[i];
                }
                cout << endl;
                for (int i = 0; i < strsize; i++)
                {
                    if (temps2->SUBD[i] == '\0') break;
                    cout << temps2->SUBD[i];
                }
                cout << endl;
                cout << temps2->outmem << endl;
                cout << temps2->minRam << endl;
                cout << temps2->cost << endl;

                cout << endl << endl;
            }
            temps2 = temps2->next;
        }
        temps2 = nullptr;
    }
    else if (choice == 5)
    {
        int temp = 0;
        cout << "\nÂâåäèòå öåíó: ";
        cin >> temp;
        Opers* temps3 = head;
        while (true)
        {
            if (temps3 == NULL) break;

            if (temp == temps3->cost)
            {
                cout << "\nÈñêîìûå äàííûå:\n";

                for (int i = 0; i < strsize; i++)
                {
                    if (temps3->Name[i] == '\0') break;
                    cout << temps3->Name[i];
                }
                cout << endl;
                for (int i = 0; i < strsize; i++)
                {
                    if (temps3->SUBD[i] == '\0') break;
                    cout << temps3->SUBD[i];
                }
                cout << endl;
                cout << temps3->outmem << endl;
                cout << temps3->minRam << endl;
                cout << temps3->cost << endl;

                cout << endl << endl;
            }
            temps3 = temps3->next;
        }
        temps3 = nullptr;
    }
}

void Add(int pos, Opers newdata)
{
    Opers* temp = new Opers;
    if (pos == 0)
    {
        temp->next = head;
        head->prev = temp;
        temp->prev = NULL;
        head = temp;
    }
    else {
        Opers* temp_pos = head;
        for (int i = 1; i < (pos - 1); i++)
            temp_pos = temp_pos->next;
        if (temp_pos->next == NULL)
        {
            tail->next = temp;
            temp->prev = tail;
            temp->next = NULL;
            tail = temp;
        }
        else
        {
            temp->next = temp_pos->next;
            temp_pos->next = temp;
            temp->next->prev = temp;
            temp->prev = temp_pos;
        }
    }
    for (int i = 0; i < strsize; i++)
    {

        temp->Name[i] = newdata.Name[i];
        if (newdata.Name[i] == '\0') break;
    }
    for (int i = 0; i < strsize; i++)
    {
        temp->SUBD[i] = newdata.SUBD[i];
        if (newdata.SUBD[i] == '\0') break;
    }
    temp->outmem = newdata.outmem;
    temp->minRam = newdata.minRam;
    temp->cost = newdata.cost;


}

void Delete(int pos)
{
    Opers* temp_pos = head;
    if (pos == 0)
    {
        head = head->next;

        head->prev = NULL;
        delete temp_pos;
    }
    else
    {
        for (int i = 1; i < (pos - 1); i++)
        {
            temp_pos = temp_pos->next;
        }

        Opers* temp = temp_pos->next;

        if (temp->next == NULL)
        {
            temp_pos->next = NULL;
            tail = temp_pos;
        }
        else
        {
            temp_pos->next = temp->next;
            temp->next->prev = temp_pos;
        }
        delete temp;
    }

}

void Sorting(int choice3)
{
    if (choice3 == 1)
    {
        Opers* left = head;
        Opers* right = head->next;

        Opers* temp = new Opers;

        while (left->next)
        {
            while (right)
            {
                if ((left->outmem) > (right->outmem))
                {
                    for (int i = 0; i < strsize; i++)
                    {
                        temp->Name[i] = left->Name[i];
                        left->Name[i] = right->Name[i];
                        right->Name[i] = temp->Name[i];
                        if (temp->Name[i] == '\0') break;
                    }

                    for (int i = 0; i < strsize; i++)
                    {
                        temp->SUBD[i] = left->SUBD[i];
                        left->SUBD[i] = right->SUBD[i];
                        right->SUBD[i] = temp->SUBD[i];
                        if (temp->SUBD[i] == '\0') break;
                    }

                    temp->outmem = left->outmem;
                    left->outmem = right->outmem;
                    right->outmem = temp->outmem;

                    temp->minRam = left->minRam;
                    left->minRam = right->minRam;
                    right->minRam = temp->minRam;

                    temp->cost = left->cost;
                    left->cost = right->cost;
                    right->cost = temp->cost;




                }
                right = right->next;
            }
            left = left->next;
            right = left->next;
        }
    }
    else if (choice3 == 2)
    {
        Opers* left = head;
        Opers* right = head->next;

        Opers* temp = new Opers;

        while (left->next)
        {
            while (right)
            {
                if ((left->minRam) > (right->minRam))
                {
                    for (int i = 0; i < strsize; i++)
                    {
                        temp->Name[i] = left->Name[i];
                        left->Name[i] = right->Name[i];
                        right->Name[i] = temp->Name[i];
                        if (temp->Name[i] == '\0') break;
                    }

                    for (int i = 0; i < strsize; i++)
                    {
                        temp->SUBD[i] = left->SUBD[i];
                        left->SUBD[i] = right->SUBD[i];
                        right->SUBD[i] = temp->SUBD[i];
                        if (temp->SUBD[i] == '\0') break;
                    }

                    temp->outmem = left->outmem;
                    left->outmem = right->outmem;
                    right->outmem = temp->outmem;

                    temp->minRam = left->minRam;
                    left->minRam = right->minRam;
                    right->minRam = temp->minRam;

                    temp->cost = left->cost;
                    left->cost = right->cost;
                    right->cost = temp->cost;




                }
                right = right->next;
            }
            left = left->next;
            right = left->next;
        }
    }
    else if (choice3 == 3)
    {
        Opers* left = head;
        Opers* right = head->next;

        Opers* temp = new Opers;

        while (left->next)
        {
            while (right)
            {
                if ((left->cost) > (right->cost))
                {
                    for (int i = 0; i < strsize; i++)
                    {
                        temp->Name[i] = left->Name[i];
                        left->Name[i] = right->Name[i];
                        right->Name[i] = temp->Name[i];
                        if (temp->Name[i] == '\0') break;
                    }

                    for (int i = 0; i < strsize; i++)
                    {
                        temp->SUBD[i] = left->SUBD[i];
                        left->SUBD[i] = right->SUBD[i];
                        right->SUBD[i] = temp->SUBD[i];
                        if (temp->SUBD[i] == '\0') break;
                    }

                    temp->outmem = left->outmem;
                    left->outmem = right->outmem;
                    right->outmem = temp->outmem;

                    temp->minRam = left->minRam;
                    left->minRam = right->minRam;
                    right->minRam = temp->minRam;

                    temp->cost = left->cost;
                    left->cost = right->cost;
                    right->cost = temp->cost;




                }
                right = right->next;
            }
            left = left->next;
            right = left->next;
        }
    }
    else if (choice3 == 4)
    {
        Opers* left = head;
        Opers* right = head->next;

        Opers* temp = new Opers;

        while (left->next)
        {
            while (right)
            {
                if ((strlen(left->Name)) > (strlen(right->Name)))
                {

                    for (int i = 0; i < strsize; i++)
                    {
                        temp->Name[i] = left->Name[i];
                        left->Name[i] = right->Name[i];
                        right->Name[i] = temp->Name[i];
                        if (temp->Name[i] == '\0') break;
                    }

                    for (int i = 0; i < strsize; i++)
                    {
                        temp->SUBD[i] = left->SUBD[i];
                        left->SUBD[i] = right->SUBD[i];
                        right->SUBD[i] = temp->SUBD[i];
                        if (temp->SUBD[i] == '\0') break;
                    }

                    temp->outmem = left->outmem;
                    left->outmem = right->outmem;
                    right->outmem = temp->outmem;

                    temp->minRam = left->minRam;
                    left->minRam = right->minRam;
                    right->minRam = temp->minRam;

                    temp->cost = left->cost;
                    left->cost = right->cost;
                    right->cost = temp->cost;




                }
                right = right->next;
            }
            left = left->next;
            right = left->next;
        }
    }
    else if (choice3 == 5)
    {
        Opers* left = head;
        Opers* right = head->next;

        Opers* temp = new Opers;

        while (left->next)
        {
            while (right)
            {
                if ((strlen(left->SUBD)) > (strlen(right->SUBD)))
                {

                    for (int i = 0; i < strsize; i++)
                    {
                        temp->Name[i] = left->Name[i];
                        left->Name[i] = right->Name[i];
                        right->Name[i] = temp->Name[i];
                        if (temp->Name[i] == '\0') break;
                    }

                    for (int i = 0; i < strsize; i++)
                    {
                        temp->SUBD[i] = left->SUBD[i];
                        left->SUBD[i] = right->SUBD[i];
                        right->SUBD[i] = temp->SUBD[i];
                        if (temp->SUBD[i] == '\0') break;
                    }

                    temp->outmem = left->outmem;
                    left->outmem = right->outmem;
                    right->outmem = temp->outmem;

                    temp->minRam = left->minRam;
                    left->minRam = right->minRam;
                    right->minRam = temp->minRam;

                    temp->cost = left->cost;
                    left->cost = right->cost;
                    right->cost = temp->cost;




                }
                right = right->next;
            }
            left = left->next;
            right = left->next;
        }
    }
}

void infile()
{
    FILE* f;
    fopen_s(&f, "file.txt", "wt");
    if (f == NULL)
    {
        return;
    }
    Opers* temp = head;
    while (temp != NULL)
    {
        for (int i = 0; i < strsize; i++)
        {
            fwrite(&temp->Name[i], 1, 1, f);
            if (temp->Name[i] == '\0') break;

        }
        fputc('\n', f);
        for (int i = 0; i < strsize; i++)
        {
            fwrite(&temp->SUBD[i], 1, 1, f);
            if (temp->SUBD[i] == '\0') break;
        }
        fputc('\n', f);
        fprintf(f, "%d", temp->outmem);
        fputc('\n', f);
        fprintf(f, "%d", temp->minRam);
        fputc('\n', f);
        fprintf(f, "%d", temp->cost);
        fputc('\n', f);
        fputc('\n', f);
        temp = temp->next;
    }
    fclose(f);
}

void Read()
{
    FILE* f;
    fopen_s(&f, "file.txt", "r");
    if (f == NULL)
    {
        return;
    }

    while (true)
    {
        Opers temp{};


        for (int i = 0; i < strsize; i++)
        {
            fread(&temp.Name[i], 1, 1, f);
            if (temp.Name[i] == '\0') break;

        }

        for (int i = 0; i < strsize; i++)
        {
            fread(&temp.SUBD[i], 1, 1, f);
            if (temp.SUBD[i] == '\0') break;
        }



        fscanf_s(f, "%d", &temp.outmem);

        fscanf_s(f, "%d", &temp.minRam);

        fscanf_s(f, "%d", &temp.cost);
        if (feof(f)) break;
        Create(temp);

    }
    fclose(f);
}

int listsize()
{
    Opers* temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;

    }
    return count;
}

void menu()
{
    cout << "\n\tÂûáåðèòå îïöèþ:\n";
    cout << "1 - Ñîçäàíèå ñïèñêà \n";
    cout << "2 - Ïå÷àòü ñïèñêà ñ íà÷àëà\n";
    cout << "3 - Ïå÷àòü ñïèñêà ñ êîíöà\n";
    cout << "4 - Ïîèñê ïî êðèòåðèþ ñ íà÷àëà ñïèñêà\n";
    cout << "5 - Ïîèñê ïî êðèòåðèþ ñ êîíöà ñïèñêà.\n";
    cout << "6 - Äîáàâëåíèå ýëåìåíòà (â ëþáîå çàäàííîå ìåñòî)\n";
    cout << "7 - Óäàëåíèå ëþáîãî ýëåìåíòà\n";
    cout << "8 - Ñîðòèðîâêà\n";
    cout << "9 - Çàïèñü íîâîãî ñïèñêà â ôàéë\n";
    cout << "10 - Ñîçäàíèå íîâîãî ñïèñêà èç ôàéëà\n";
    cout << "11 - Ìåíþ\n";
    cout << "12 - Âûõîä\n";
}