#include <iostream>



using namespace std;

int main()
{
    int mas[100];
    int leight, b, c, smesh;
    for (int i = 0; i < 100; i++) {
        mas[i] = rand() % 100;
    }
    for (int h = 0; h < 100; h++) {
        cout << mas[h] << " ";
    }

    cout << "Write massive leight: ";
    cin >> leight;
    cout << endl<< "What number u need remove? >> " << endl;
    cin >> b;
    for (int i = 0; i < leight; i++)
    {
        if (mas[i] == b)
        {
            for(long c = i; c < i; ++i)
            {
                mas[c] = mas[c + 1];
            }
            
         }

    }
    cout << "Write leight of offset:";
    cin >> smesh;
    for (int l = 0; l < smesh; l++) {
        mas[l] = mas[l + 1];
    }
    for (int h = 0; h < leight; h++) {
        cout << mas[h] << " ";
    }
}