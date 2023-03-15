#include <iostream>
using namespace std;
int main()
{
    int space, occur;
    cout << "Enter the Number of space : ";
    cin >> space;
    cout << "Enter the Number of Occurance : ";
    cin >> occur;
    for (int i = 1; i <= occur; i++)
    {
        for (int i = 1; i <= space; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << " ";
            }
            cout << "I LOVE YOU" << endl;
        }
        for (int i = space; i >= 0; i--)
        {
            for (int j = i; j >= 0; j--)
            {
                cout << " ";
            }
            cout << "I LOVE YOU" << endl;
        }
    }
    return 0;
}