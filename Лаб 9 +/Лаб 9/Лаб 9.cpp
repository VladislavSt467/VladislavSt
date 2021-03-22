#include <iostream>
#include <cstdlib>
#define N 9
#define M 9
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a = 0, b = 99;
    int A[N][M];
    for (int j = 0; j < N; j++) 
    {
        for (int i = 0; i < M; i++)
        {
            A[i][j] = a + rand() % (b - a + 1);
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "------------------------------------------\n";

    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < M; i++) 
        {
            if (A[i] != A[j]) 
                A[i][j] = A[j][i];
            cout << A[i][j] << " ";
        }
        cout << endl;

    }
 
    return 0;
}
